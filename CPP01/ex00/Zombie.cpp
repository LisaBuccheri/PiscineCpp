/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:33:34 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/03 14:33:36 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name)
{
    return ;
}

Zombie::~Zombie()
{
    std::cout << this->_name + ": " << "is dead!!!!" << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << this->_name + ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
