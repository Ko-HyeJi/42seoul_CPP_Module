/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 05:31:29 by kohyeji           #+#    #+#             */
/*   Updated: 2023/06/25 06:09:10 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
private:
    std::stack<int> _stack;
    RPN(const RPN& obj);
    RPN& operator=(const RPN& obj);

public:
    RPN(void);
    ~RPN(void);

    int calculate(const char* str);
};

#endif