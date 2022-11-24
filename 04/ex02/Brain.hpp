/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:44:31 by hyko              #+#    #+#             */
/*   Updated: 2022/11/22 12:39:56 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "iostream"

class Brain
{
private:
	std::string ideas[100];
public:
	Brain(void);
	Brain(const Brain& obj);
	~Brain(void);
	
	Brain&	operator=(const Brain& obj);

	std::string	getIdea(const int idx) const;
	void		setIdea(const int idx, const std::string idea);
	
};

#endif