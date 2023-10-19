/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:32:24 by desteve           #+#    #+#             */
/*   Updated: 2023/06/29 13:32:39 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
public:
	// Constructors/Destructors
	Fixed(void);							//Constructor
	Fixed(int const val);
	Fixed(float const val);
	Fixed(const Fixed& fixed);				//Copy constructor
	~Fixed(void);							//Destructor

	Fixed& operator=(const Fixed& rhs);		//Assignment operator overload

	// Getters
	int getRawBits(void) const;

	// Setters
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

private:
	static int const fraction = 8;
	int _fixedPoint;
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);