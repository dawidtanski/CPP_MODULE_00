/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 12:23:21 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/30 12:23:25 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	std::string result(strlen(argv[1]), '\0');
	for (size_t i = 0; i < strlen(argv[1]); i++)
	{
		if (std::islower(argv[1][i]))
			result[i] = std::toupper(argv[1][i]);
		else
			result[i] = argv[1][i];
	}
	std::cout << result << "\n";
	return (0);
}