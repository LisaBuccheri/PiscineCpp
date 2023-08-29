/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:33:42 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/03 14:33:44 by lbuccher         ###   ########.fr       */
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
        
        Zombie( std::string name );
        ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif

