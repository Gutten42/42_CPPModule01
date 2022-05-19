/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:51:54 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/19 11:45:16 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class	Zombie {
	

public:

	// Zombie( void );

	Zombie( void );
	~Zombie( void );
	
	void	setName( std::string name );
	void	announce( void ) const;

private:

	std::string	name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
