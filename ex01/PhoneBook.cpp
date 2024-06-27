/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:58:39 by oemelyan          #+#    #+#             */
/*   Updated: 2024/06/27 16:21:18 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	_next_index_to_write = 0;
	max_number_of_contacts = MAX_CONTACTS;
}
PhoneBook::~PhoneBook(){}

int PhoneBook::find_index(){
	return _next_index_to_write;
	int i = 0;
	while (i < 8)
	{
		if (_my_pb[i].getIndex()== 0)
			return i;
		i++;
	}
	return(0);
}

std::string getInput(std::string &s, std::string msg) {
	while (1){
		std::cout << msg << std::endl;
		std::getline(std::cin, s);
		if (!s.empty())
			break ;
		else {
			std::cout << "the input is empty, try again" << std::endl;
		}
	}
	return s;
}

void PhoneBook::addContact(int i) {
	std::string str1, str2, str3, str4, str5;
	getInput(str1, "Please enter the first name");
	getInput(str2, "Please enter the last name");
	getInput(str5, "Please enter the phone number");
	getInput(str3, "Please enter nick name");
	getInput(str4, "Please enter the darkest secret");

	this->_my_pb[i].setFirstName(str1);
	this->_my_pb[i].setLastName(str2);
	this->_my_pb[i].setNickName(str3);
	this->_my_pb[i].setDarkSecret(str4);
	this->_my_pb[i].setIndex(i + 1);
	this->_my_pb[i].setPhoneNumber(str5);
	_next_index_to_write = (_next_index_to_write + 1) % max_number_of_contacts;
}

std::string processField(std::string field) {
	if (field.size() > 10)
		return field.substr(0, 9) + ".";
	return field;
}

void PhoneBook::displayContact(int index) {
	std::string str1, str2, str3, str4;
	str1 = _my_pb[index].getFirstName();
	str2 = _my_pb[index].getLastName();
	str3 = _my_pb[index].getNickName();
	str4 = _my_pb[index].getPhone();

	std::cout << std::setw(10) << _my_pb[index].getIndex() << "|" << std::setw(10);
	std::cout << processField(str1) << "|" << std::setw(10);
	std::cout << processField(str2) << "|" << std::setw(10);
	std::cout << processField(str3) << "|" << std::setw(10);
	std::cout << processField(str4) << "|" << std::endl;
}

void PhoneBook::displayAll() {
	std::cout << "*** CONTACTS ALL ***" << std::endl;
	int i = 0;
	while (i < 8) {
		if (_my_pb[i].getIndex() >= 1 && _my_pb[i].getIndex() <= 8)
			displayContact(i);
		i++;
	}
}

bool PhoneBook::inputValidation(std::string input) {
	if (input.size() != 1)
		return false;
	if (input[0] < '1' || input[0] > '8')
		return false;
	return true;
}

void PhoneBook::searchAndDisplay() {
	std::string input;

	displayAll();
	std::cout << "enter ALL or the contact index" << std::endl;
	std::getline(std::cin, input);
	if (inputValidation(input)){
		displayOneContact(input[0] - '1');
	}
	else
		std::cout << "invalid input" << std::endl;
}

void PhoneBook::displayOneContact(int index) {
	if (_my_pb[index].getIndex() == 0) {
		std::cout << "the contact with this index doesn't exist yet" << std::endl;
		return ;
	}
	std::cout << "-----------" << std::endl;
	std::cout << "* contact *" << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << "contact number: " << _my_pb[index].getIndex() << std::endl;
	std::cout << "first name: " << _my_pb[index].getFirstName() << std::endl;
	std::cout << "last name: " << _my_pb[index].getLastName() << std::endl;
	std::cout << "nick name: " << _my_pb[index].getNickName() << std::endl;
	std::cout << "phone number: " << _my_pb[index].getPhone() << std::endl;
}
