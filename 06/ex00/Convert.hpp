/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:55:18 by hyko              #+#    #+#             */
/*   Updated: 2022/12/06 19:48:28 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#define DEFAULT "\033[0m"
#define RED "\033[0;31m"

#include <iostream>
#include <cstring>

class Convert
{
private:
    const char* _data;
    std::string _type;
    bool        _isInfOrNan(void);
    void        _checkDataType(void);
    void        _printChar(char c);
    void        _printInt(int i);
    void        _printFloat(float f);
    void        _printDouble(double d);

    Convert(void);
    Convert(const Convert& obj);
    Convert&    operator=(const Convert& obj);

public:
    Convert(const char* data);
    ~Convert(void);

    void    execute(void);
};

#endif
