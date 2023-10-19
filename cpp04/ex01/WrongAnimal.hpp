/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 04:42:25 by desteve           #+#    #+#             */
/*   Updated: 2023/07/08 04:45:35 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
public:
	// Constructors
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& other);

	// Assignment operator overload
	WrongAnimal& operator=(const WrongAnimal& rhs);
	
	// Destructor
	virtual ~WrongAnimal();

	// Getters
	std::string getType() const;

	// Member functions
	void makeSound() const;

protected:

	std::string _type;
};