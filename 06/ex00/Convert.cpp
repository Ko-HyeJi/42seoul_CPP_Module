/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:55:20 by hyko              #+#    #+#             */
/*   Updated: 2022/12/02 19:33:24 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(char* data) : _data(data)
{
}

Convert::~Convert()
{
    std::cout << "type: " << _type << std::endl;
}

void    Convert::checkDataType(void)
{
    int len = strlen(_data);
    
    //char -> 1글자, 숫자X
    if (len == 1 && isdigit(_data[0]) == false) {
        _type = "char";
        return ;
    }

    //int -> 숫자로만 이루어짐
    int i = 0;
    if (_data[0] == '-' || _data[0] == '+')
        i++;
    while (_data[i]) {
        if (isdigit(_data[i]) == false)
            break ;
        i++;
    }
    if (i == len) {
        _type = "int";
        return ;
    }

    int p = 0;
    int f = 0;
    
    //float -> 숫자 중간에 '.' 있고, 'f'로 끝남
    if (_data[len - 1] == 'f') {
        _type = "float";
        return ;
    }

    //double -> 숫자 중간에 '.'있음
    else {
        _type = "double";
    }
}


const char* Convert::TooManyArgumentException::what() const throw()
{
	return ("[Exception] Too Many Argument");
}

const char* Convert::InvalidArgumentException::what() const throw()
{
	return ("[Exception] Invalid Argument");
}
