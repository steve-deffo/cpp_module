/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:07:13 by desteve           #+#    #+#             */
/*   Updated: 2023/07/04 05:28:02 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap steve("steve");
	ClapTrap deffo("deffo");
	ClapTrap laure("laure");

	steve.attack("guy");
	steve.attack("dadi");
	steve.attack("mum");
	steve.takeDamage(5);
	deffo.takeDamage(9);
	deffo.takeDamage(10);
	laure.beRepaired(10);
	laure.takeDamage(19);
}