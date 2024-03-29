/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 22:25:34 by kohyeji           #+#    #+#             */
/*   Updated: 2023/06/25 06:07:07 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string& dataFile) {
    std::ifstream input_file(dataFile);
    std::string line;
    
    if (!input_file.is_open()) {
        throw (FILE_OPEN_ERR);
    }

    getline(input_file, line);

    while (getline(input_file, line)) {
        size_t pos = line.find(',');

        if (pos != std::string::npos) {
            std::string date = line.substr(0, pos);
            double price = atof(line.substr(pos + 1).c_str());

            isValidDate(date, true);
            if (price < 0) {
                throw (WRONG_DATA_ERR + line);
            }

            _priceData.insert(std::make_pair(date, price));
        }
    }

    input_file.close();
}

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj):_priceData(obj.getPriceData()) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj) {
    _priceData = obj.getPriceData();
    return *this;
}

std::map<std::string, double> BitcoinExchange::getPriceData(void) const {
    return _priceData;
}

void BitcoinExchange::calculatePrice(const std::string& input) {
    if (input == "") {
        return ;
    }
    
    size_t pos = input.find('|');
    if (pos != std::string::npos) {
        if (input[pos-1] != ' ' || input[pos+1] != ' ') {
            throw (BAD_INPUT_ERR + input);
        }
        
        std::string date = input.substr(0, pos-1);
        double value = atof(input.substr(pos+2).c_str());

        isValidDate(date, false);
        isValidValue(value);

        std::map<std::string, double>::iterator iter = _priceData.lower_bound(date);
        if (iter->first != date) {
            --iter;
        }
        std::cout << date << " => " << value << " = " << (value * iter->second) << std::endl;

    }
    else {
        throw (BAD_INPUT_ERR + input);
    }
}

void BitcoinExchange::isValidDate(const std::string& date, bool isData) {
    std::string err;
    if (isData) {
        err = WRONG_DATA_ERR;
    } else {
        err = BAD_INPUT_ERR;
    }
    
    if (date.length() != 10) {
        throw (err + date);
    }

    int year = atoi(date.substr(0, 4).c_str());
    int month = atoi(date.substr(5, 2).c_str());
    int day = atoi(date.substr(8, 2).c_str());

    if (year < 2009 || year > 9999) 
        throw (err + date);
    if (month < 1 || month > 12)
        throw (err + date);
    if (year == 2009 && month == 1 && day == 1)
        throw (err + date);

    int days_in_month;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days_in_month = 31;
            break;
        case 4: case 6: case 9: case 11:
            days_in_month = 30;
            break;
        case 2:
            days_in_month = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 29 : 28;
            break;
    }

    if (day < 1 || day > days_in_month)
        throw (err + date);
}

void BitcoinExchange::isValidValue(const double& value) {
    if (value < 0) {
        throw (NOT_POS_NUM_ERR);
    } else if (value > 1000) {
        throw (TOO_LARGE_NUM_ERR);
    }
}
