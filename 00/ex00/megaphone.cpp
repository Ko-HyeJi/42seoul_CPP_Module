/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyko <hyko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:48:07 by hyko              #+#    #+#             */
/*   Updated: 2022/11/11 20:31:56 by hyko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

 getUppserString(const string& str) {

}

int main(int argc, char** argv) {
	int cnt;
	std::cin >> cnt;

	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}

	std::string str;
	for (int i = 1; i < cnt; i++) {
		str = argv[i];
		std::cout << getUpperString(str) << std::endl;
	}
}




// int main(int argc, char **argv)
// {
// 	if (argc == 1){
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
// 	}
// 	else {
// 		for (int i = 1; argv[i]; i++){
// 			for (int j = 0; argv[i][j]; j++){
// 				if (std::islower(argv[i][j]))
// 					argv[i][j] = std::toupper(argv[i][j]);
// 			}
// 		}
// 		for (int i = 1; argv[i]; i++){
// 			std::cout << argv[i];
// 		}
// 		std::cout << "\n";
// 	}
// 	return (0);
// }
