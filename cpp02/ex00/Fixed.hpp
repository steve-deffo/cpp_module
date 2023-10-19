/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:48:06 by desteve           #+#    #+#             */
/*   Updated: 2023/06/30 01:27:34 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
public:
	// C
	Fixed();
	Fixed(const Fixed& other);

	// Assignment operator overload
	Fixed& operator=(const Fixed& rhs);

	// D
	~Fixed();

	// G
	int getRawBits(void) const;

	// S
	void setRawBits(int const raw);

private:
	static int const fraction = 8;
	int _fixedPoint;
};