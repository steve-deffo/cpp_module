/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:06:49 by desteve           #+#    #+#             */
/*   Updated: 2023/07/09 01:22:03 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	const std::string examples[] = {
		"I want to sleep",
		"I want food",
		"I want pets",
		"I want to go for a walk",
		"I want water",
		"I want a treat"
	};
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = examples[rand() % (sizeof(examples) / sizeof(std::string))];
	std::cout << "Brain(void) constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

const std::string& Brain::getIdea(int index) const
{
	return this->_ideas[index];
}