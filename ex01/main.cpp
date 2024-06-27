/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oemelyan <oemelyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:38:27 by oemelyan          #+#    #+#             */
/*   Updated: 2024/06/27 16:03:44 by oemelyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook PB;

	while(1) {
		std::string input;
		std::cout << "Enter a command: ADD / SEARCH / EXIT" << std::endl;
		// std::cin >> input;
		if(!std::getline(std::cin, input)) {
			std::cout << "CTRL + D detected" << std::endl;
			break;
		}
		if (input.empty() == true)
			continue;
		if (std::cin.eof())
			break ;
		if (input.compare("ADD") == 0) {
			int i = PB.find_index();
			PB.addContact(i);
		}
		else if (input.compare("SEARCH") == 0) {
			PB.searchAndDisplay();
		}
		else if (input.compare("EXIT" ) == 0 || input.empty())
			break ;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return(0);
}