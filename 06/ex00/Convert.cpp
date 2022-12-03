/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:55:20 by hyko              #+#    #+#             */
/*   Updated: 2022/12/03 22:24:12 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(char* data) : _data(data) {}

Convert::~Convert() {}

void    Convert::_infnan(void)
{
    if (!strcmp(_data, "-inff") || !strcmp(_data, "-inf"))
        _type = "n_inf";
    if (!strcmp(_data, "+inff") || !strcmp(_data, "+inf"))
        _type = "p_inf";
    if (!strcmp(_data, "nanf") || !strcmp(_data, "nan"))
        _type = "nan";
}

void    Convert::_checkDataType(void)
{
    int len = strlen(_data);
    bool p_flag = false;
    
    if (len == 1 && isdigit(_data[0]) == false) {
        _type = "char";
        return ;
    }
    if (_data[0] != '+' && _data[0] != '-' && !isdigit(_data[0])) {
        return ;
    }
    for (int i = 1; i < len; i++) {
        if (!isdigit(_data[i])) { 
            if (p_flag == false && _data[i] == '.' && _data[i + 1])
                p_flag = true;
            else if (_data[i] == 'f' && !_data[i + 1]) {
                _type = "float";
                return ;
            }
            else
                return ;
        }
    }
    if (p_flag == true)
        _type = "double";
    else
        _type = "int";
}

void    Convert::execute(void)
{   
    _checkDataType();
    _infnan();

    if (_type == "char")
        _printChar(_data[0]);
    else if (_type == "int")
        _printInt(atoi(_data));
    else if (_type == "float")
        _printFloat(static_cast<float>(atof(_data)));
    else if (_type == "double")
        _printDouble(atof(_data));
    else if (_type == "n_inf")
        // std::cout << "nan" << std::endl;
    else if (_type == "p_inf")
        // std::cout << "nan" << std::endl;
    else if (_type == "nan")
        // std::cout << "nan" << std::endl;
    else
        throw (InvalidArgumentException());
}

void    Convert::_printChar(char c)
{
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void    Convert::_printInt(int i)
{
    if (isprint(i))
        std::cout << "char: " << static_cast<char>(i) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void    Convert::_printFloat(float f)
{   
    char c = static_cast<char>(f);
    if (isprint(c))
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    if (f == static_cast<int>(f)) {
        std::cout << "float: " << f << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
    }
    else {
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(f) << std::endl;
    }
}

void    Convert::_printDouble(double d)
{    
    char c = static_cast<char>(d);
    if (isprint(c))
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    if (d == (int)d) {
        std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
        std::cout << "double: " << d << ".0" << std::endl;
    }
    else {
        std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    }
}

void    Convert::_printInfNan(void)
{
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

const char* Convert::InvalidArgumentException::what() const throw()
{
	return ("[Exception] Invalid Argument");
}
