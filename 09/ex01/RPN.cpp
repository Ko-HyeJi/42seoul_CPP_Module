/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 05:31:22 by kohyeji           #+#    #+#             */
/*   Updated: 2023/06/25 06:09:33 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) {}

RPN::~RPN(void) {}

int RPN::calculate(const char* str) {
    for(int i = 0; str[i]; i++) {
        if (isdigit(str[i]) && str[i + 1] == ' ') {
            _stack.push(atoi(&str[i]));
        } 
        else if (strchr("+-/*", str[i]) && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
            if (_stack.size() < 2) {
                throw ("Error");
            } else {
                int r = _stack.top();
                _stack.pop();
                int l = _stack.top();
                _stack.pop();
                
                switch (str[i])
                {
                case '+':
                    if (l + r < 0)
                        throw ("Error");
                    _stack.push(l + r);
                    break;
                case '-':
                    _stack.push(l - r);
                    break;
                case '/':
                    if (r == 0) {
                        throw ("Error");
                    }
                    else {
                        _stack.push(l / r);
                    }
                    break;
                case '*':
                    if (l * r < 0)
                        throw ("Error");
                    _stack.push(l * r);
                    break;
                }
            }
        } 
        else if (str[i] == ' ') {
            continue;
        } 
        else {
            throw ("Error");
        }
    }
    if (_stack.size() != 1) {
        throw ("Error");
    } else {
        return _stack.top();
    }    
}
