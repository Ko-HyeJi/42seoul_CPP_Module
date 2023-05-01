/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohyeji <kohyeji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 22:25:37 by kohyeji           #+#    #+#             */
/*   Updated: 2023/05/01 22:47:53 by kohyeji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#define DEFAULT "\033[0m"
#define RED "\033[0;31m"

// #include "Date.hpp"
#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange
{
private:
    std::string dataFile;
    std::string inputFile;
    
    std::map<std::string, double> priceData;

public:
    BitcoinExchange(const std::string& dataFile);
    ~BitcoinExchange();

    std::map<std::string, double>& getPriceData();

    void DataToMap();
};

BitcoinExchange::BitcoinExchange(const std::string& dataFile): dataFile(dataFile)
{
    DataToMap();   
}

BitcoinExchange::~BitcoinExchange()
{
}

std::map<std::string, double>& BitcoinExchange::getPriceData() {
    return priceData;
}

void BitcoinExchange::DataToMap() {
    std::ifstream input_file(dataFile);
    std::string line;
    
    if (!input_file.is_open()) {
        throw ("Could not open the file");
    }

        getline(input_file, line);
        
        while (getline(input_file, line)){
        size_t pos = line.find(',');

        if (pos != std::string::npos) {
            std::string date = line.substr(0, pos);
            double price = std::stod(line.substr(pos+1));

            priceData.insert(std::make_pair(date, price));
        }
    }

    input_file.close();
}

#endif