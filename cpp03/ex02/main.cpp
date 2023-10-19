/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:12:33 by desteve           #+#    #+#             */
/*   Updated: 2023/07/04 05:27:36 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap steve("steve");
	ClapTrap deffo("deffo");
	ClapTrap laure("laure");
	ScavTrap taro("taro");
	FragTrap moha("moha");

	steve.attack("guy");
	steve.attack("dadi");
	steve.attack("mum");
	steve.takeDamage(5);
	deffo.takeDamage(9);
	deffo.takeDamage(10);
	laure.beRepaired(10);
	laure.takeDamage(19);
	taro.attack("chi");
	taro.takeDamage(99);
	taro.beRepaired(50);
	taro.guardGate();
	moha.attack("yda");
	moha.takeDamage(99);
	moha.beRepaired(50);
	moha.highFivesGuys();
}