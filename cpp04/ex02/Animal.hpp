/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 04:42:02 by desteve           #+#    #+#             */
/*   Updated: 2023/07/09 01:52:24 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
public:
	// Constructors
	Animal();
	Animal(std::string type);
	Animal(const Animal& other);

	// Assignment operator overload
	Animal& operator=(const Animal& rhs);
	
	// Destructors
	virtual ~Animal();

	// Getters
	std::string getType() const;

	// Member functions
	virtual void makeSound() const = 0;

protected:

	std::string _type;
};