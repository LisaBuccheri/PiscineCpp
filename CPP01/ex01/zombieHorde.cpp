/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:36:45 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/03 14:36:47 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name)
{
    Zombie* zombies = new Zombie[n];

    for(int i = 0; i < n; i++)
    {
        zombies[i].setName(name);
        zombies[i].announce();
    }

    return (zombies);
}
