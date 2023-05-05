/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohyeji <kohyeji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 05:31:29 by kohyeji           #+#    #+#             */
/*   Updated: 2023/05/06 06:39:38 by kohyeji          ###   ########.fr       */
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
    
    // RPN();
    
public:
    RPN(const char* str);
    // ~RPN();

    
};



// RPN::~RPN() {

// }


#endif