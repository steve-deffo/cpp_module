/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:21:11 by desteve           #+#    #+#             */
/*   Updated: 2023/06/20 21:07:22 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) :
	_name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}