/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 04:42:17 by desteve           #+#    #+#             */
/*   Updated: 2023/07/08 04:44:59 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
public:
	// Constructors
	Dog();
	Dog(std::string type);
	Dog(const Dog& other);

	// Assignment operator overload
	Dog& operator=(const Dog& rhs);

	// Destructor
	~Dog();

	// Member functions
	void makeSound() const;
};