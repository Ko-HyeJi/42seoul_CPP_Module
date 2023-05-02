/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohyeji <kohyeji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 22:47:53 by kohyeji           #+#    #+#             */
/*   Updated: 2023/05/02 10:23:28 by kohyeji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include "Date.hpp"
#include "error.hpp"
#include "color.hpp"
#include <fstream>
#include <map>

class BitcoinExchange
{
private:    
    std::map<std::string, double> priceData;
    BitcoinExchange();

public:
    BitcoinExchange(const std::string& dataFile);
    ~BitcoinExchange();
    //복사생성자
    //대입연산자오버로딩

    std::map<std::string, double>& getPriceData();

    void calculatePrice(const std::string& input);
};

BitcoinExchange::BitcoinExchange(const std::string& dataFile) {
    std::ifstream input_file(dataFile);
    std::string line;
    
    if (!input_file.is_open()) {
        throw (FILE_OPEN_ERR);
    }

        getline(input_file, line);
        
        while (getline(input_file, line)){
        size_t pos = line.find(',');

        if (pos != std::string::npos) {
            std::string date = line.substr(0, pos);
            double price = std::stod(line.substr(pos+1));
            
            Date tmp(date);
            if (!tmp.isValidDate()) {
                throw (WRONG_DATA_ERR);
            }
            if (price < 0) {
                throw (WRONG_DATA_ERR);
            }

            priceData.insert(std::make_pair(date, price));
        }
    }

    input_file.close();
}

BitcoinExchange::~BitcoinExchange() {
}

std::map<std::string, double>& BitcoinExchange::getPriceData() {
    return priceData;
}

void BitcoinExchange::calculatePrice(const std::string& input) {
    
    //parse one line
    if (input == "") {
        return ;
    }
    
    size_t pos = input.find('|');

    if (pos != std::string::npos) {
        Date date(input.substr(0, pos-1));
        double value = std::stod(input.substr(pos+2));
        
        if (!date.isValidDate()) {
            throw (BAD_INPUT_ERR + input);
        }
        
        if (value < 0) {
            throw (NOT_POS_NUM_ERR);
        } else if (value > 1000) {
            throw (TOO_LARGE_NUM_ERR);
        }

        std::map<std::string, double>::iterator iter = priceData.lower_bound(date.getDate());
        if (iter->first != date.getDate()) {
            --iter;
        }
        std::cout << date.getDate() << " => " << value << " = " << (value * iter->second) << std::endl;

    }
    else {
        throw (BAD_INPUT_ERR + input);
    }
}

#endif