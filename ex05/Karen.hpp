/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:39:25 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/20 15:58:40 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
#define KAREN_H

#include <iostream>

#define DEBUG 1
#define INFO 2
#define WARNING 3
#define ERROR 4

class	Karen {

public:

	Karen( void );
	~Karen( void );

	void	complain( std::string level );

private:

	static int	translate_level( std::string level );

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

};

#endif
