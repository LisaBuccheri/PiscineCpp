/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:39:11 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/03 14:39:12 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string name ) : _type(name)
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

const std::string& Weapon::getType()
{
    return this->_type;
}

void    Weapon::setType( std::string type)
{
    this->_type = type;
}
