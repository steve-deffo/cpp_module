/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 08:19:55 by desteve           #+#    #+#             */
/*   Updated: 2023/06/22 18:24:16 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) :
	_name(name)
{
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie instance '" << this->_name << "' destroyed." << std::endl;
}

void Zombie::announce( void ) const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}