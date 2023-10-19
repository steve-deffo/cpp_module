/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 04:42:28 by desteve           #+#    #+#             */
/*   Updated: 2023/07/08 04:48:04 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal("Cat")
{
	std::cout << "WrongCat(void) constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type)
	: WrongAnimal(type)
{
	std::cout << "WrongCat(\"" << type << "\") constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
	: WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called on " << other._type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	this->_type = rhs._type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called for " << this->_type << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}