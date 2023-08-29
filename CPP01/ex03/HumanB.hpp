/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:38:48 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/03 14:38:50 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB
{

    private:
		Weapon		*_weapon;
		std::string	_name;

    public:
        HumanB( std::string name );
        ~HumanB( void );

		void attack( void );
		void setWeapon( Weapon &weap );
};

#endif
