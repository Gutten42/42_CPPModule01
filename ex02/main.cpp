/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:23:03 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/18 18:28:01 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {
	std::string		str = "HI THIS IS BRAIN";
	std::string*	strPTR = &str;
	std::string&	strREF = str;

	std::cout << &str << std::endl;
	std::cout << strPTR << std::endl;
	std::cout << &strREF << std::endl;
	
	std::cout << *strPTR << std::endl;
	std::cout << strREF << std::endl;
}
