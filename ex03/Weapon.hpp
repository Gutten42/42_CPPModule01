/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:27:51 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/19 11:44:15 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class	Weapon {

public:

	Weapon( std::string type );
	~Weapon( void );

	const std::string&	getType( void );
	void				setType( std::string new_type );

private:

	std::string	type;

};

#endif
