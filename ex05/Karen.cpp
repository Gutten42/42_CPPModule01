/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:42:53 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/24 14:42:02 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ) {
	std::cout << "A wild Karen has entered the store!" << std::endl;
}

Karen::~Karen( void ) {
	std::cout << "Karen left the store!" << std::endl;
}

// int		Karen::translate_level( std::string level ) {
// 	if (level == "DEBUG")
// 		return DEBUG;
// 	else if (level == "INFO")
// 		return INFO;
// 	else if (level == "WARNING")
// 		return WARNING;
// 	else if (level == "ERROR")
// 		return ERROR;
// 	else
// 		return 0;
// }

void	Karen::complain( std::string level ) {
	
	std::string	lvl[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void (Karen::*func[4])( void ) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	for (int i = 0; i < 4; i++) {
		if (lvl[i] == level)
			(this->*func[i])();
	}	
	
	// switch (translate_level(level)) {
	// 	case DEBUG:
	// 		this->debug();
	// 		break ;
	// 	case INFO:
	// 		this->info();
	// 		break ;
	// 	case WARNING:
	// 		this->warning();	
	// 		break ;
	// 	case ERROR:
	// 		this->error();
	// 		break ;
	// }
}

void	Karen::debug( void ) {
	std::cout << "[DEBUG]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info( void ) {
	std::cout << "[INFO]\nI cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void ) {
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void ) {
	std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
}
