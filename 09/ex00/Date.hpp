/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohyeji <kohyeji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:42:41 by kohyeji           #+#    #+#             */
/*   Updated: 2023/05/02 10:28:01 by kohyeji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATE_HPP
#define DATE_HPP

#include <iostream>

class Date
{
private:
    std::string date;
    int* date_arr;
    
public:
    Date(const std::string& date);
    ~Date();

    std::string& getDate();

    bool isValidDate();
};

Date::Date(const std::string& date): date(date)
{
    date_arr = new int[3];
    
    if (date.length() != 10) {
        for(int i = 0; i < 3; i++) {
            date_arr[i] = 0;
        }   
        // throw("error msg");
    }
    else {
        date_arr[0] = atoi(date.substr(0, 4).c_str());
        date_arr[1] = atoi(date.substr(5, 2).c_str());
        date_arr[2] = atoi(date.substr(8, 2).c_str());
    }
}

Date::~Date() {
    delete date_arr;
}

std::string& Date::getDate() {
    return date;
}

bool Date::isValidDate()
{
    int year = date_arr[0];
    int month = date_arr[1];
    int day = date_arr[2];

    if (year < 2009 || year > 9999) 
        return false;
    if (month < 1 || month > 12)
        return false;
    if (year == 2009 && month == 1 && day == 1)
        return false;

    int days_in_month;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days_in_month = 31;
            break;
        case 4: case 6: case 9: case 11:
            days_in_month = 30;
            break;
        case 2:
            days_in_month = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 29 : 28;
            break;
        default:
            return false;
    }

    if (day < 1 || day > days_in_month)
        return false;

    return true;
}

#endif