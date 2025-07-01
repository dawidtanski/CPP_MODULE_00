/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:49:11 by dtanski           #+#    #+#             */
/*   Updated: 2025/07/01 16:14:24 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_full = false;
	this->_count = 0;
	return ;
}
PhoneBook::~PhoneBook(){}

void PhoneBook:: addContact()
{
	std::string	input;

	if (this->_full == false)
	{
		std::cout << "That's your " << this->_count + 1 << " contact" << std::endl;
		if (this->_contacts[this->_count].set_data() == true)
		{
			if (this->_count == 7)
			{
				this->_full = true;
				this->_count++;
			}
			else
				this->_count++;
		}
	}
	else
	{
		std::cout << "Phonebook can store only 8 members. Do you want to replace last one? \n If you want to - press 'y' . Press anything else to go to main menu" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "Ctrl + D pressed. Exiting a program";
			std::exit(0);
		}
		else if (input.compare("y") == 0 || input.compare("Y") == 0)
		{
			for (int i = 0; i < 7; i++)
				this->_contacts[i] = this->_contacts[i + 1];
			this->_contacts[7].set_data();
		}
		else
			std::cout << "Back to main menu" << std::endl;
		
	}
}

void	PhoneBook:: searchContact() const
{
	int	index;

	if (this->_count == 0)
	{
		std::cout << "Please add at least one contact" << std::endl;
		return ;
	}
	else
	{
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		for (int i = 0; i < this->_count; i++)
			this->_contacts[i].get_data(i + 1);
		std::cout << "|-------------------------------------------|" << std::endl;


		std::string	input;
		std::cout << "Put the number 1-8 to check contact" << std::endl;
		while (!(std::getline(std::cin, input)) || input.length() > 1 
       	     || (std::atoi(input.c_str()) -1 > this->_count && this->_full == false))
		{
			if (std::cin.eof())
			{
				std::cout << "Ctrl + D pressed. Exiting phonebook" << std::endl;
				std::exit(0);
			}
			else if (input.length() > 1 || input.compare("0") < 0 || input.compare("8") > 0)
			{
				std::cin.clear();
				std::cout << "Press the proper number in range of 1 to 8" << std::endl;
				std::cout << "Enter the index of the contact you want to see. Press '0' to exit.\n Index: ";
			}
			else if (this->_full == false && std::atoi(input.c_str()) > this->_count)
			{
				std::cout << "You have only " << this->_count << " contacts in your phonebook" << std::endl;
				std::cin.clear();
				std::cout << "Enter the index of the contact you want to see. Press '0' to exit.\n Index: ";			}
		}
		index = std::atoi(input.c_str());
		if (index <= this->_count)
		{
			this->_contacts[index - 1].get_field(index -1);
		}
		else
			std::cout << "Exiting PhoneBook's search mode." << std::endl;
	}
}

void	PhoneBook:: showInfo(void)
{
	std::cout << "Welcome to PhoneBook!" << std::endl;
	std::cout << "You can add up to 8 contacts." << std::endl;
	std::cout << "To add a contact, type 'ADD'." << std::endl;
	std::cout << "To view contacts, type 'SEARCH'." << std::endl;
	std::cout << "To exit the program, type 'EXIT'." << std::endl;
	std::cout << "Type your command: ";
}