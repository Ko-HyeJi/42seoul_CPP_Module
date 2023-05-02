/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohyeji <kohyeji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 22:47:53 by kohyeji           #+#    #+#             */
/*   Updated: 2023/05/02 11:16:45 by kohyeji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include "error.hpp"
#include "color.hpp"
#include <iostream>
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

    void calculatePrice(const std::string& input);
    void isValidDate(const std::string& date, bool isData);
    void isValidValue(const double& value);
};

#endif