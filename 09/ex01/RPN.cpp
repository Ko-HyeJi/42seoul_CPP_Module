/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 05:31:22 by kohyeji           #+#    #+#             */
/*   Updated: 2023/06/04 00:48:33 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {}

RPN::~RPN(void) {}

int RPN::calculate(const char* str) {
    for(int i = 0; str[i]; i++) {
        if (isdigit(str[i]) && str[i + 1] == ' ') {
            stack.push(atoi(&str[i]));
        } 
        else if (strchr("+-/*", str[i]) && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
            if (stack.size() < 2) {
                throw ("ERROR");
            } else {
                int r = stack.top();
                stack.pop();
                int l = stack.top();
                stack.pop();
                
                switch (str[i])
                {
                case '+':
                    if (l + r < 0)
                        throw ("ERROR")
                    stack.push(l + r);
                    break;
                case '-':
                    stack.push(l - r);
                    break;
                case '/':
                    if (r == 0) {
                        throw ("ERROR");
                    }
                    else {
                        stack.push(l / r);
                    }
                    break;
                case '*':
                    if (l * r < 0)
                        throw ("ERROR")
                    stack.push(l * r);
                    break;
                }
            }
        } 
        else if (str[i] == ' ') {
            continue;
        } 
        else {
            throw ("ERROR");
        }
    }
    if (stack.size() != 1) {
        throw("ERROR");
    } else {
        return stack.top();
    }    
}
