/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohyeji <kohyeji@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:18:43 by kohyeji           #+#    #+#             */
/*   Updated: 2023/05/02 11:20:18 by kohyeji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_HPP
#define ERROR_HPP

#define WRONG_ARG_ERR std::string("Error: Invalid argument.")
#define FILE_OPEN_ERR std::string("Error: Could not open file.")
#define WRONG_DATA_ERR std::string("Error: Invalid data => ")
#define WRONG_INPUT_ERR std::string("Error: Invalid input file.")

#define TOO_LARGE_NUM_ERR std::string("Error: too large a number.")
#define NOT_POS_NUM_ERR std::string("Error: not a positive number.")
#define BAD_INPUT_ERR std::string("Error: bad input => ")

#endif