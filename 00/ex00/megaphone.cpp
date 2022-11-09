/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:48:07 by hyko              #+#    #+#             */
/*   Updated: 2022/11/09 20:43:54 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	else {
		for (int i = 1; argv[i]; i++){
			for (int j = 0; argv[i][j]; j++){
				if (std::islower(argv[i][j]))
					argv[i][j] = std::toupper(argv[i][j]);
			}
		}
		for (int i = 1; argv[i]; i++){
			std::cout << argv[i];
		}
		std::cout << "\n";
	}
	return (0);
}
