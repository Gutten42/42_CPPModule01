/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:11:18 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/19 12:23:12 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class	HumanB {

public:

	HumanB( std::string name );
	~HumanB( void );

	void	attack( void ) const;
	void	setWeapon( Weapon& new_weapon );

private:

	std::string	name;
	Weapon*		weapon;

};

#endif
