/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:25:26 by hyko              #+#    #+#             */
/*   Updated: 2022/11/10 20:34:41 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	_contact[8];
	int		_idx;
	void	_print_phonebook(void);

public:
	void	add_contact(void);
	void	search_contact(void);	
};

#endif
