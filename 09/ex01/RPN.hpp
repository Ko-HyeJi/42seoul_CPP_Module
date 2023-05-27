/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 05:31:29 by kohyeji           #+#    #+#             */
/*   Updated: 2023/05/27 18:01:44 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
private:
    std::stack<int> stack;
    RPN(const RPN& obj);
    RPN& operator=(const RPN& obj);

public:
    RPN(void);
    ~RPN(void);

    int calculate(const char* str);
};

#endif