/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 08:54:50 by desteve           #+#    #+#             */
/*   Updated: 2023/06/17 08:58:29 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name) :
	_name(name)
{
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie instance '" << this->_name << "' destroyed." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce( void ) const
{
	std::cout << "<name> " << this->_name << std::endl;
}