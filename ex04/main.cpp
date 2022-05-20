/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:19:36 by vguttenb          #+#    #+#             */
/*   Updated: 2022/05/20 12:25:30 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	main(int argc, char **argv) {

	(void)argc;
	if (argc != 4) {
		std::cout << "Non-valid argument number, this program only accepts: FILENAME, s1 and s2" << std::endl;
		return 1;
	}
	for (int i = 1; i < 4; i++) {
		if (!argv[i] || !argv[i][0]) {
			std::cout << "Sorry, empty strings won't do" << std::endl;
			return 1;
		}
	}
	std::ifstream		ifs(argv[1]);
	if (!ifs) {
		std::cout << "Error opening file: " << argv[1] << std::endl;
		return 1;
	}
	std::string			outfile(argv[1]);
	outfile += ".replace";
	std::ofstream		ofs(outfile);
	if (!ofs) {
		std::cout << "Error opening file: " << outfile << std::endl;
		return 1;
	}
	std::string			oldStr(argv[2]), newStr(argv[3]);
	std::stringstream	ss;
	ss << ifs.rdbuf();
	size_t	start = 0, end;
	end = ss.str().find(oldStr);
	while(end != std::string::npos) {
		ofs << ss.str().substr(start, end - start);
		start = end + oldStr.size();
		ofs << newStr;
		end = ss.str().find(oldStr, end + 1);
	}
	ofs << ss.str().substr(start);
}

