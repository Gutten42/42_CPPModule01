/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:11:16 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/19 12:23:26 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string name ): name(name) {
	std::cout << "yay! " << name << " is born!" << std::endl;
}

HumanB::~HumanB( void ) {
	std::cout << "Oh, crap! " << this->name << " is dead!" << std::endl;
}

void	HumanB::attack( void ) const {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& new_weapon) {
	this->weapon = &new_weapon;
}
