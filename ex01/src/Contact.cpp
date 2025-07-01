/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:48:29 by dtanski           #+#    #+#             */
/*   Updated: 2025/07/01 16:08:22 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

std::string Contact::_fields[5] = 
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
		this->_contact_info[i] = std::string();
	return ; 
}
Contact::~Contact(){}

void	Contact::get_data(int id) const
{
	std::cout << "|" << std::setw(10) << id;
	for (int i = FirstName; i <= NickName; i++)
	{
		std:: cout << "|";
		if (this->_contact_info[i].length() > 10)
			std::cout << this->_contact_info[i].substr(0,9) << ".";
		else
			std::cout << std::setw(10) << this->_contact_info[i];
	}
	std::cout << "|" << std::endl;
}

bool	Contact::set_data()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please enter the " << this->_fields[i] << "\n";
		while (!std::getline(std::cin, this->_contact_info[i]) || this->_contact_info[i].length() == 0)
		{
			if (std::cin.eof())
			{
				std::cout << "Ctrl + D pressed. Exiting a phonebook" << std::endl;
				std::exit(0);
			}
			else if (this->_contact_info[i] == "")
			{
				this->_contact_info[i].clear();
				std::cout << "Empty field: " << this->_fields[i] << std::endl;
			}
		}
	}
	std::cout << "Contact added" << std::endl;
	return (true);
}

void	Contact::get_field(int id) const
{
    if (id >= 0 && id <= 7)
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << this->_fields[i] << ": " << this->_contact_info[i] << std::endl;
        }
    }
}