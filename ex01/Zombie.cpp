/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:57:29 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/18 18:12:29 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void ) {	
	std::cout <<  "I've been born but I don`t have a naem :(" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << this->name << " died x.x" << std::endl;
}

void	Zombie::setName( std::string name ) {
	this->name = name;
}

void	Zombie::announce( void ) const {
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
