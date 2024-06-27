/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:01:26 by oemelyan          #+#    #+#             */
/*   Updated: 2024/06/27 15:12:10 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact
{
	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nick_name;
		std::string		_darkest_secret;
		std::string		_phone_number;

		int				_contact_index;

	public:
		Contact();
		~Contact() {};

		//setters
		void setFirstName(std::string theName);
		void setLastName(std::string theLastName);
		void setNickName(std::string nick);
		void setPhoneNumber(std::string phoneNum);
		void setDarkSecret(std::string thesecret);
		void setIndex(int index);

		//getters
		int getIndex();
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhone();
};

#endif