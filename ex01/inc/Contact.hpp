/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:45:23 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/23 17:17:45 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_2_HPP
# define CONTACT_2_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Contact
{
	private:
	static std::string _fields[5];
	std::string	_contact_info[5];

	enum field
	{
		FirstName,
		LastName,
		NickName,
		PhoneNumber,
		DarkestSecret
	};

	public:
		Contact(void);
		~Contact(void);
		void	get_data(int id) const;
		bool	set_data();
};

#endif