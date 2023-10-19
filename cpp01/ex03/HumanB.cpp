/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:21:26 by desteve           #+#    #+#             */
/*   Updated: 2023/06/20 21:08:33 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) :
	_name(name)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with his ";
	if (this->_weapon)
		std::cout << this->_weapon->getType();
	else
		std::cout << "bare fists";
	std::cout << std::endl;
}