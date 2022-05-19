/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:04:05 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/18 17:27:41 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ) {
	Zombie	Adam = Zombie("Adam");
	Zombie	*Al = newZombie("Al");
	randomChump("Announcer");
	Al->announce();
	delete Al;
	Adam.announce();
}
