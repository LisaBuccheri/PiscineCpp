/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:36:32 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/03 14:36:33 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream> 

class Zombie
{
    private:
        std::string _name;
    
    public:
        void announce( void );
        void setName( std::string name);
        
        Zombie( void );
        Zombie( std::string name );
        ~Zombie();
};

Zombie* zombieHorde( int n, std::string name);

#endif

