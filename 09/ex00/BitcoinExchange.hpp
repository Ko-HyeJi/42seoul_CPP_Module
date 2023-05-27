/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 22:47:53 by kohyeji           #+#    #+#             */
/*   Updated: 2023/05/27 18:13:00 by hyko             ###   ########.fr       */
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
    BitcoinExchange(void);

public:
    BitcoinExchange(const std::string& dataFile);
    ~BitcoinExchange(void);
    BitcoinExchange(const BitcoinExchange& obj);
    BitcoinExchange& operator=(const BitcoinExchange& obj);

    std::map<std::string, double> getPriceData(void) const;

    void calculatePrice(const std::string& input);
    void isValidDate(const std::string& date, bool isData);
    void isValidValue(const double& value);
};

#endif