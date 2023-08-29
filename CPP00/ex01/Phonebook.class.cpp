/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:12:59 by lbuccher          #+#    #+#             */
/*   Updated: 2022/04/27 17:23:19 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <sstream>
#include <string>
#include "Phonebook.class.hpp"

Phonebook::Phonebook( void )
{
	return;
}

Phonebook::~Phonebook( void )
{
	return;
}

void	Phonebook::getOneContact( int index )
{
	if (!this->_contacts[index].getFirstName().length())
	{
		std::cout << "No contact at this index!" << std::endl;
		return;
	}
	std::cout << "First name: " << this->_contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << this->_contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[index].getNickName() << std::endl;
	std::cout << "Phone number: " << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
	return;
}

std::string	Phonebook::getInfo( void )
{
	std::string str;

	while (!str.length())
		std::getline(std::cin, str);
	return (str);
}

void	Phonebook::setNewContact( int index )
{
	std::cout << "Enter first name: ";
	this->_contacts[index].setFirstName(getInfo());
	std::cout << "Enter last name: ";
	this->_contacts[index].setLastName(getInfo());
	std::cout << "Enter nickname: ";
	this->_contacts[index].setNickName(getInfo());
	std::cout << "Enter phone number: ";
	this->_contacts[index].setPhoneNumber(getInfo());
	std::cout << "Enter darkestSecret: ";
	this->_contacts[index].setDarkestSecret(getInfo());

	return;
}

void	Phonebook::printPhonebook(Phonebook phonebook)
{
	int	i = -1;

	printContact("Index");
	printContact("First name");
	printContact("Last name");
	printContact("Nick name");
	std::cout << std::endl;
	while (++i < 8)
	{
		printContact(std::to_string(i));
		printContact(phonebook._contacts[i].getFirstName());
		printContact(phonebook._contacts[i].getLastName());
		printContact(phonebook._contacts[i].getNickName());
		std::cout << std::endl;
	}
}

void	Phonebook::printContact(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	std::cout << std::setw(10) << str;
	std::cout << "|";
}
