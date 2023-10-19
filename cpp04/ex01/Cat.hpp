/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 04:42:09 by desteve           #+#    #+#             */
/*   Updated: 2023/07/09 01:20:54 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

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

	// Getters
	Brain* getBrain() const;

	// Member functions
	virtual void makeSound() const;

private:

	Brain* _brain;
};