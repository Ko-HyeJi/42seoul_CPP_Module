/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohyeji <kohyeji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:42:41 by kohyeji           #+#    #+#             */
/*   Updated: 2023/05/01 17:57:09 by kohyeji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Date
{
private:
    int* date;
    
public:
    Date(const std::string& date);
    ~Date();

    int* getDate();

    bool isValidDate(); //유효한 날짜인지 확인
    //대소비교 연산자 오버로딩
};

Date::Date(const std::string& str)
{
    date = new int[3];

    std::string date_str[3];
    
    if (str.length() != 11) {
        for(int i = 0; i < 3; i++) {
            date[i] = 0;
        }   
        // throw("error msg");
    }
    else {
        date_str[0] = str.substr(0, 4);
        date_str[1] = str.substr(5, 2);
        date_str[2] = str.substr(8, 2);

        date[0] = atoi(date_str[0].c_str());
        date[1] = atoi(date_str[1].c_str());
        date[2] = atoi(date_str[2].c_str());
    }
}

Date::~Date()
{
    delete date;
}

int* Date::getDate() {
    return date;
}

bool Date::isValidDate()
{
    int year = date[0];
    int month = date[1];
    int day = date[2];

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
