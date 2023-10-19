/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 04:42:32 by desteve           #+#    #+#             */
/*   Updated: 2023/07/08 04:46:06 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	// Constructors
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat& other);

	// Assignment operator overload
	WrongCat& operator=(const WrongCat& rhs);

	// Destructor
	~WrongCat();

	// Member functions
	void makeSound() const;
};