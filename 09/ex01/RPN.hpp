/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohyeji <kohyeji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 05:31:29 by kohyeji           #+#    #+#             */
/*   Updated: 2023/05/07 16:38:42 by kohyeji          ###   ########.fr       */
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
    
public:
    RPN();
    int calculate(const char* str);
    ~RPN();

    
};

#endif