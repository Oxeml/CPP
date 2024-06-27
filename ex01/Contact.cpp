/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:48:16 by oemelyan          #+#    #+#             */
/*   Updated: 2024/06/27 15:57:03 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	_contact_index = 0;
};

//Contact::~Contact() {}

//setters
void Contact::setFirstName(std::string theName){
	_first_name = theName;
}

void Contact::setLastName(std::string theLastName){
	_last_name = theLastName;
}

void Contact:: setNickName(std::string nick){
	_nick_name = nick;
}

void Contact:: setPhoneNumber(std::string phoneNum) {
	_phone_number = phoneNum;
}

void Contact:: setDarkSecret(std::string thesecret){
	_darkest_secret = thesecret;
}

void Contact:: setIndex(int index){
	_contact_index = index;
}

//getters
int Contact::getIndex(){
	return _contact_index;
}
std::string Contact::getFirstName(){
	return _first_name;
}

std::string Contact::getLastName(){
	return _last_name;
}

std::string Contact::getNickName(){
	return _nick_name;
}

std::string Contact::getPhone(){
	return _phone_number;
}

