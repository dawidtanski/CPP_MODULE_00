/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:45:43 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/22 15:25:50 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK2_HPP
# define PHONEBOOK2_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];
		bool	_full;
		int		_count;
		
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact(void);
		void	searchContact(void) const;
		void	showInfo(void);

};

#endif