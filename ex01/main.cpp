/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:39:34 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/18 18:13:36 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main ( void ) {
	Zombie* Horde = zombieHorde(4, "Pepe");
	for(int i = 0; i < 4; i++) {
		Horde[i].announce();
	}
	delete [] Horde;
}
