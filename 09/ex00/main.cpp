/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohyeji <kohyeji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 22:25:39 by kohyeji           #+#    #+#             */
/*   Updated: 2023/05/01 18:43:56 by kohyeji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "Date.hpp"

std::map<std::string, double>   getlineAndInsertMap(std::string filename, char delimiter)
{
    std::map<std::string, double> lines;
    std::string line;

    std::ifstream input_file(filename);
    if (!input_file.is_open()) {
        throw ("Could not open the file");
    }

        getline(input_file, line);
        if (line != "date,exchange_rate") {
            throw ("file error");
        }
        
        while (getline(input_file, line)){
        size_t pos = line.find(delimiter);

        if (pos != std::string::npos) {
        std::string key = line.substr(0, pos);
        double value = std::stod(line.substr(pos+1));

        lines.insert(std::make_pair(key, value));
        }
    }

    // std::map<std::string, double>::iterator iter;
    // for (iter = lines.begin(); iter != lines.end(); ++iter) {
    //     std::cout << iter->first << std::endl << iter->second << std::endl;
    // }


    input_file.close();    

    return lines;
}

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
        
        std::cout << "=============== data.csv ===============" << std::endl;
        std::map<std::string, double> data = getlineAndInsertMap("data.csv", ',');    
        

        std::cout << "=============== input.txt =============" << std::endl;
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
            if (line == "") {
                continue;
            }
            
            size_t pos = line.find('|');

            if (pos != std::string::npos) {
                Date date(line.substr(0, pos));
                double value = std::stod(line.substr(pos+1));
                
                if (isValidValue(value)) {
                    if (date.isValidDate()) {
                        int* tmp = date.getDate();
                        std::cout << tmp[0] << "-" << std::setw(2) << std::setfill('0') << tmp[1] << "-" << std::setw(2) << std::setfill('0') << tmp[2] << std::endl;
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