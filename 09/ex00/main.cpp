/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohyeji <kohyeji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 22:25:39 by kohyeji           #+#    #+#             */
/*   Updated: 2023/05/01 23:46:47 by kohyeji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "Date.hpp"

bool isValidValue(int value) {
    if (value < 0) {
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    } else if (value > 1000) {
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

int main(int argc, char** argv) {
    try {
        if (argc != 2)
			throw ("Invalid Argument");

        BitcoinExchange bitcoin("data.csv");


        

        std::string line;
        std::ifstream input_file(argv[1]);
        if (!input_file.is_open()) {
            throw ("Could not open the file");
        }
        
        getline(input_file, line);
        if (line != "date | value") {
            throw ("file error");
        }
                
        while (getline(input_file, line)){

            //parse one line
            if (line == "") {
                continue;
            }
            
            size_t pos = line.find('|');

            if (pos != std::string::npos) {
                Date date(line.substr(0, pos-1));
                double value = std::stod(line.substr(pos+2));
                
                if (isValidValue(value)) {
                    if (date.isValidDate()) {
                        
                        //calculate price
                        std::map<std::string, double>::iterator iter = bitcoin.getPriceData().lower_bound(date.getDate());
                        if (iter->first != date.getDate()) {
                            --iter;
                        }
                        std::cout << date.getDate() << " => " << value << " = " << (value * iter->second) << std::endl;
                        
                    }
                    else {
                        std::cout << "Error: bad input => " << line << std::endl;
                    }                    
                }
            }
            else {
                std::cout << "Error: bad input => " << line << std::endl;
            }            
        }




        
    }
    catch (const char* err) {
		std::cout << RED << err << DEFAULT << std::endl;
	} 
    
    return 0;
}