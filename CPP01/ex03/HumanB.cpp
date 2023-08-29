/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:38:43 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/03 14:38:45 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB( std::string name ) : _weapon(NULL), _name(name)
{
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}

void HumanB::attack( void )
{
	std::cout << this->_name << " attack with their " << this->_weapon->getType() << std::endl;
	return ;
}

void HumanB::setWeapon( Weapon &weap )
{
	this->_weapon = &weap;
	return ;
}
