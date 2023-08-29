/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:36:24 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/03 14:36:25 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
    return ;
}

Zombie::Zombie( std::string name ) : _name(name)
{
    return ;
}

Zombie::~Zombie()
{
    std::cout << this->_name + ": " << "is dead!!!!" << std::endl;
    return ;
}

void    Zombie::announce( void )
{
    std::cout << this->_name + ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName( std::string name)
{
    this->_name = name;
}
