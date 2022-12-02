/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:55:18 by hyko              #+#    #+#             */
/*   Updated: 2022/12/02 19:25:32 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#define DEFAULT "\033[0m"
#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define PURPLE "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"

#include <iostream>
#include <cstring>

class Convert
{
private:
    char*       _data;
    std::string _type;
public:
    Convert(char* data);
    ~Convert(void);

    void    checkDataType(void);

    class   TooManyArgumentException : public std::exception {
        const char* what() const throw();
    };
    class   InvalidArgumentException : public std::exception {
        const char* what() const throw();
    };
};



#endif
