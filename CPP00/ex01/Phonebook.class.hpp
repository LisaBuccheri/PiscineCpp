/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:08:42 by lbuccher          #+#    #+#             */
/*   Updated: 2022/04/27 17:12:41 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include <iomanip>
# include <iostream>
# include "Contact.class.hpp"

class Phonebook
{
	public:
		Phonebook ( void );
		~Phonebook ( void );

		Contact		getAllContacts( void );
		std::string	getInfo( void );
		void		getOneContact( int index );
		void		setNewContact( int index );
		void		printPhonebook(Phonebook phonebook);
		void		printContact(std::string str);

	private:
		Contact	_contacts[8];
};

#endif
