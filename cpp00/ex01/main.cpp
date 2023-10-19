/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 05:04:59 by desteve           #+#    #+#             */
/*   Updated: 2023/06/17 20:10:02 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

std::string	mdr(std::string str)
{
	std::string s;

	while (1)
	{
		std::cout << str;
		if (!std::getline(std::cin, s))
			exit(0);
		
		if (s != " " && s != "	" && s != "")
			break;
	}
	return (s);
}

void addContact(Phonebook *phonebook)
{
	Contact 	contact;
	std::string str;

	str = mdr("First name: ");
	contact.setFirstName(str);

	str = mdr("Last Name: "); 
	contact.setLastName(str);

	str = mdr("Nickname: "); 
	contact.setNickName(str);

	str = mdr("Phone Number: "); 
	contact.setPhoneNumber(str);

	str = mdr("Darkest secret: "); 
	contact.setSecret(str);

	phonebook->setContact(contact);
}

std::string truncate(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void searchContact(Phonebook *phonebook)
{
	int index;
	int count;

	count = phonebook->getCount();
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│" << std::setw(10) << std::right << "index";
	std::cout << "│" << std::setw(10) << std::right << "first name";
	std::cout << "│" << std::setw(10) << std::right << "last name";
	std::cout << "│" << std::setw(10) << std::right << "nickname" << "│" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	for (int i=0; i < phonebook->getCount(); i++)
	{
		Contact contact;
		contact = phonebook->getContact(i);
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(contact.getFirstName());
		std::cout << "|" << std::setw(10) << truncate(contact.getLastName());
		std::cout << "|" << std::setw(10) << truncate(contact.getNickName()) << "|" << std::endl;
	}
	std::cout << "└──────────┴──────────┴──────────┴─────────┘" << std::endl;
	if (count > 0)
	{
		std::cout << "Please enter an index for relevant information: ";
		// std::cin >> index;
		while (!(std::cin >> index) || index > count || index < 1)
		{
			if (std::cin.eof())
				exit(0);
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please enter an index between 1 and " << count << ": ";
		}
		index--;
		Contact tmp;
		tmp = phonebook->getContact(index);
		std::cout << std::endl;
		std::cout << "First name - " << tmp.getFirstName() << std::endl;
		std::cout << "Last name - " << tmp.getLastName() << std::endl;
		std::cout << "Nickname - " << tmp.getNickName() << std::endl;
		std::cout << "Phone number - " << tmp.getPhoneNumber() << std::endl;
		std::cout << "Darkest secret - " << tmp.getSecret() << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	else
	{
		std::cout << "Table is empty!" << std::endl;
	}
}

int main()
{
	Phonebook phonebook;

	std::cout << "Command : " << std::endl;
	std::cout << " -ADD: add a contact to the phonebook" << std::endl;
	std::cout << " -SEARCH: search for a contact in the phonebook" << std::endl;
	std::cout << " -EXIT: quit the program" << std::endl;
	while (1)
	{
		std::string command;
		std::cout << std::endl << "Enter a command: ";
		if (!std::getline(std::cin, command))
			exit(0);
		if (command == "ADD")
		{
			addContact(&phonebook);
		}
		else if (command == "SEARCH")
		{
			searchContact(&phonebook);
		}
		else if (command == "EXIT")
		{
			break;
		}
	}
}