/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 04:42:09 by desteve           #+#    #+#             */
/*   Updated: 2023/07/08 04:58:26 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{
public:
	// Constructors
	Cat();
	Cat(std::string type);
	Cat(const Cat& other);

	// Assignment operator overload
	Cat& operator=(const Cat& rhs);

	// Destructor
	~Cat();

	// Member functions
	void makeSound() const;
};