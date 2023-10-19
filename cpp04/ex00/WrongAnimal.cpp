/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 04:42:21 by desteve           #+#    #+#             */
/*   Updated: 2023/07/08 04:47:48 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	: _type("")
{
	std::cout << "WrongAnimal(void) constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
	: _type(type)
{
	std::cout << "WrongAnimal(\"" << type << "\") constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
	: _type(other._type)
{
	std::cout << "WrongAnimal copy constructor called on " << other._type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	this->_type = rhs._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called for " << this->_type << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Default WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}