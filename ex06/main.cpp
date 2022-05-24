/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:38:33 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/24 15:33:49 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main( int argc, char **argv )
{
	if (argc != 2)
		std::cout << "Non-valid argument number, this program only takes one string as an argument" << std::endl;

	Karen	Karen;

	Karen.complain(argv[1]);

}
