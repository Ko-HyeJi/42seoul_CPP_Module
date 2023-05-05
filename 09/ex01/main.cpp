/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohyeji <kohyeji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 05:31:21 by kohyeji           #+#    #+#             */
/*   Updated: 2023/05/06 06:39:47 by kohyeji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv) {
    try {
        if (argc != 2) {
            throw ("Error: Invalid Argument");
        }
        RPN rpn(argv[1]);
    }
    catch(const char* err) {
        std::cout << err << std::endl;
    }
}