/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 22:25:39 by kohyeji           #+#    #+#             */
/*   Updated: 2023/06/10 14:07:26 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
    try {
        if (argc != 2)
			throw (WRONG_ARG_ERR);

        BitcoinExchange bitcoin("data.csv");

        std::string line;
        std::ifstream input_file(argv[1]);
        if (!input_file.is_open()) {
            throw (FILE_OPEN_ERR);
        }
        
        getline(input_file, line);
        if (line != "date | value") {
            throw (WRONG_INPUT_ERR);
        }
                
        while (getline(input_file, line)) {
            try {
                bitcoin.calculatePrice(line);
            }
            catch (const std::string err) {
                std::cout << BLUE << err << DEFAULT << std::endl;
            }
        }
        
        input_file.close();        
    }
    catch (const std::string err) {
		std::cout << RED << err << DEFAULT << std::endl;
	} 
    
    return 0;
}