/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 05:07:01 by desteve           #+#    #+#             */
/*   Updated: 2023/06/12 05:07:05 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
: _index(0)
{
	return;
}

Phonebook::~Phonebook()
{
	return;
}

Contact Phonebook::getContact(int index) const
{
	return this->_contacts[index];
}

int	Phonebook::getCount() const
{
	return this->_count;
}

void Phonebook::setContact(Contact contact)
{
	this->_contacts[this->_index] = contact;
	_count = (_count < 8) ? _count + 1 : _count;
	this->_index = (this->_index + 1) % 8;
	return;
}

int Phonebook::_count = 0;