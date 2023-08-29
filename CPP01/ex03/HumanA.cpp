/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:38:35 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/03 14:38:37 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weap ) : _weapon(weap), _name(name)
{
	return ;	
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack( void )
{
	std::cout << this->_name << " attack with their " << this->_weapon.getType() << std::endl;
	return ;
}
