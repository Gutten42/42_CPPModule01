/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:51:54 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/19 11:45:56 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class	Zombie {
	

public:

	Zombie( std::string name );
	~Zombie( void );
	
	void	announce( void ) const;

private:

	std::string	name;

};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
