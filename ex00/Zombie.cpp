/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:57:29 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/18 17:26:35 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name ): name(name) {
	std::cout << this->name << " is born o.o" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << this->name << " died x.x" << std::endl;
}

void	Zombie::announce( void ) const {
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
