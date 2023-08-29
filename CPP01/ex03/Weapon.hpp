/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:39:17 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/03 14:39:18 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>


class Weapon
{

    private:
        std::string _type;

    public:
        Weapon( std::string name );
        ~Weapon( void );

        const std::string& getType();
        void    setType(std::string type);
};

#endif
