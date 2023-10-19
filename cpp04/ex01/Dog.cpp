/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 04:42:13 by desteve           #+#    #+#             */
/*   Updated: 2023/07/09 01:23:31 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog(void) constructor called" << std::endl;
}

Dog::Dog(std::string type)
	: Animal(type), _brain(new Brain())
{
	std::cout << "Dog(\"" << type << "\") constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
	: Animal(other)
{
	this->_brain = new Brain(*other._brain);
	std::cout << "Dog copy constructor called on " << other._type << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called for " << this->_type << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}