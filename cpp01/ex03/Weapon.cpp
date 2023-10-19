/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:21:38 by desteve           #+#    #+#             */
/*   Updated: 2023/06/20 21:10:30 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) :
	_type(type)
{
}

Weapon::~Weapon(void)
{
}

std::string const & Weapon::getType(void) const
{
	return this->_type;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}