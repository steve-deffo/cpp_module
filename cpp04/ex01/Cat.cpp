/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 04:42:06 by desteve           #+#    #+#             */
/*   Updated: 2023/07/09 01:22:47 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat(void) constructor called" << std::endl;
}

Cat::Cat(std::string type)
	: Animal(type), _brain(new Brain())
{
	std::cout << "Cat(\"" << type << "\") constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
	: Animal(other)
{
	this->_brain = new Brain(*other._brain);
	std::cout << "Cat copy constructor called on " << other._type << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called for " << this->_type << std::endl;
}

Brain* Cat::getBrain() const
{
	return this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}