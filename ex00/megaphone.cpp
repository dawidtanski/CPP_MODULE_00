/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 12:23:21 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/30 21:52:14 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

std::string	to_uppercase(std::string str)
{
	for (long unsigned int i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	std::string result;
	std::string	word;
	for (int i = 0; i < argc; i++)
	{
		word = to_uppercase(argv[i]);
		result += word;
		result += " ";
	}
	// for (size_t i = 0; i < strlen(argv[1]); i++)
	// {
	// 	if (std::islower(argv[1][i]))
	// 		result[i] = std::toupper(argv[1][i]);
	// 	else
	// 		result[i] = argv[1][i];
	// }
	std::cout << result << "\n";
	return (0);
}