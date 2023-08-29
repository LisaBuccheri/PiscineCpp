/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:29:45 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/03 14:29:47 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctype.h>
#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

int	isNumber(std::string str)
{
	size_t	i = -1;

	while (++i < str.length())
		if (!isdigit(str[i]))
			return (0);
	return (1);
}

int	main()
{
	std::string	input;
	Phonebook	phonebook;
	int			i = 0;
	int			index;

	while (1)
	{
		std::cout << "Enter ADD, SEARCH or EXIT: " << std::endl;
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			if (i == 8)
				i = 0;
			std::cout << "You ask to add a contact." << std::endl;
			phonebook.setNewContact(i);
			i++;
		}
		else if (input.compare("SEARCH") == 0)
		{
			phonebook.printPhonebook(phonebook);
			while (!isNumber(input)|| !input.length())
			{
				std::cout << "Enter the contact's index between 0 and 7: ";
				std::cin >> input;
			}
			index = std::stoi(input);
			if (index > 7)
				std::cout << "The number should be between 0 and 7." << std::endl;
			else
				phonebook.getOneContact(index);
		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "You are leaving the phonebook. BYE" << std::endl;
			break ;
		}
	}
	return (0);
}
