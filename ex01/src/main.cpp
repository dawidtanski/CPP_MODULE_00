/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:44:28 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/30 12:23:44 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"
#include "../inc/Contact.hpp"

int main(void)
{
	PhoneBook	phoneBook;
	bool		run = true;
	std::string	command;

	phoneBook.showInfo();
	std::cout << "\033[33m$>\033[0m";
	
	while (run && std::getline(std::cin, command))
	{
		if (std::cin.eof())
		{
            std::cout << "Exiting PhoneBook." << std::endl;
            return (0);
		}
		else if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
		{
			std::cout << "You've closed the program!" << std::endl;
			run = false;
			continue;
		}
		command.clear();
		std::cout << "\033[33m$>\033[0m";
	}

	return (0);
}