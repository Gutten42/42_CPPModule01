/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:49:53 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/19 12:16:25 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string name, Weapon& weapon): name(name), weapon(weapon) {
	std::cout << "yay! " << name << " is born!" << std::endl;
}

HumanA::~HumanA( void ) {
	std::cout << "Oh, crap! " << this->name << " is dead!" << std::endl;
}

void	HumanA::attack( void ) const {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
