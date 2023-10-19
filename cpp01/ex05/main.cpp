/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:29:47 by desteve           #+#    #+#             */
/*   Updated: 2023/06/22 14:56:47 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main()
{
	Harl Harl;

	std::cout << "DEBUG: " << std::endl;
	Harl.complain("DEBUG");
	std::cout << "INFO: " << std::endl;
	Harl.complain("INFO");
	std::cout << "WARNING: " << std::endl;
	Harl.complain("WARNING");
	std::cout << "ERROR: " << std::endl;
	Harl.complain("ERROR");
}