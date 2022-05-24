/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:42:53 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/24 15:29:21 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ) {
	std::cout << "A wild Karen has entered the store!" << std::endl;
}

Karen::~Karen( void ) {
	std::cout << "Karen left the store!" << std::endl;
}

int		Karen::translate_level( std::string level ) {

	std::string	lvl[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++) {
		if (lvl[i] == level)
			return i + 1;
	}
	return 0;
}

void	Karen::complain( std::string level ) {
	
	switch (translate_level(level)) {
		case DEBUG:
			this->debug();
		case INFO:
			this->info();
		case WARNING:
			this->warning();
		case ERROR:
			this->error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Karen::debug( void ) {
	std::cout << "[DEBUG]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}

void	Karen::info( void ) {
	std::cout << "[INFO]\nI cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void	Karen::warning( void ) {
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void	Karen::error( void ) {
	std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now.\n" << std::endl;
}
