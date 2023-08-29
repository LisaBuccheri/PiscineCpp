/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:38:55 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/03 14:38:57 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA
{

    private:
        Weapon 		&_weapon;
		std::string	_name;

    public:
        HumanA( std::string name, Weapon &weap );
        ~HumanA( void );

		void attack( void );
};

#endif
