/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:26:47 by lbuccher          #+#    #+#             */
/*   Updated: 2022/04/28 13:26:49 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.class.hpp"

Contact::Contact( void )
{
	return;
}

Contact::~Contact( void )
{
	return;
}

std::string Contact::getFirstName( void ) const
{
	return this->_firstName;
}

std::string Contact::getLastName( void ) const
{
	return this->_lastName;
}

std::string Contact::getNickName( void ) const
{
	return this->_nickName;
}

std::string Contact::getPhoneNumber( void ) const
{
	return this->_phoneNumber;
}

std::string Contact::getDarkestSecret( void ) const
{
	return this->_darkestSecret;
}

void Contact::setFirstName( std::string str )
{
	this->_firstName = str;
	return;
}

void Contact::setLastName( std::string str )
{
	this->_lastName = str;
	return;
}

void Contact::setNickName( std::string str )
{
	this->_nickName = str;
	return;
}

void Contact::setPhoneNumber( std::string str )
{
	this->_phoneNumber = str;
	return;
}

void Contact::setDarkestSecret( std::string str )
{
	this->_darkestSecret = str;
	return;
}
