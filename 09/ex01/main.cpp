/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohyeji <kohyeji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 05:31:21 by kohyeji           #+#    #+#             */
/*   Updated: 2023/05/07 16:40:35 by kohyeji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv) {
    try {
        if (argc != 2) {
            throw ("Error: Invalid Argument");
        }
        RPN rpn;
        std::cout << rpn.calculate(argv[1]) << std::endl;
    }
    catch(const char* err) {
        std::cout << err << std::endl;
    }
}