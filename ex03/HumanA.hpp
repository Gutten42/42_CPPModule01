/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:49:56 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/19 12:18:12 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class	HumanA {

public:

	HumanA( std::string name, Weapon& weapon);
	~HumanA( void );

	void	attack( void ) const;

private:

	std::string	name;
	Weapon&		weapon;

};

#endif
