/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:32:38 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/03 14:32:40 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zomb = new Zombie("Brainy");
    Zombie* zomby;

    zomb->announce();
    delete zomb;

    zomby = newZombie("Brand");
    zomby->announce();
    delete zomby;

    randomChump("Backy");
    return (0);
}
