/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:42:50 by oemelyan          #+#    #+#             */
/*   Updated: 2024/06/25 10:28:35 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
	private:
		Contact _my_pb[8];
		int _next_index_to_write;
		int max_number_of_contacts;

	public:
		PhoneBook();
		~PhoneBook();

		int find_index();
		void addContact(int i);
		void displayAll();
		bool inputValidation(std::string input);
		void searchAndDisplay();
		void displayContact(int index);
		void displayOneContact(int index);
};

#endif