/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 00:32:23 by hyko              #+#    #+#             */
/*   Updated: 2022/12/04 00:53:58 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
	std::string	data;
};

uintptr_t serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data before;
	before.data = "aaa";
	std::cout << "before: " << before.data << std::endl;
	
	uintptr_t ptr = serialize(&before);

	Data* after;
	after = deserialize(ptr);
	std::cout << "after: " << after->data << std::endl;

	return (0);
}
