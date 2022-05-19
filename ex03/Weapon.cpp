/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:27:57 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/19 11:42:42 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ): type(type) {
	
}

Weapon::~Weapon( void ) {
	
}

const std::string&	Weapon::getType( void ) {
	return this->type;
}

void	Weapon::setType( std::string new_type ) {
	this->type = new_type;
}
