/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:07:09 by desteve           #+#    #+#             */
/*   Updated: 2023/06/22 15:08:09 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	Harl Harl;

	if (argc == 2)
	{
		std::string levels[4] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
		};
		int i = 0;
		while (i < 4 && levels[i] != argv[1])
			i++;
		switch (i)
		{
			case 0:
				std::cout << "[ " << levels[0] << " ]" << std::endl;
				Harl.complain(levels[0]);
				std::cout << std::endl;
			case 1:
				std::cout << "[ " << levels[1] << " ]" << std::endl;
				Harl.complain(levels[1]);
				std::cout << std::endl;
			case 2:
				std::cout << "[ " << levels[2] << " ]" << std::endl;
				Harl.complain(levels[2]);
				std::cout << std::endl;
			case 3:
				std::cout << "[ " << levels[3] << " ]" << std::endl;
				Harl.complain(levels[3]);
				std::cout << std::endl;
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
}