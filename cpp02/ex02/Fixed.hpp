/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:43:42 by desteve           #+#    #+#             */
/*   Updated: 2023/06/30 23:37:53 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
public:
	// Constructeurs/Destructeurs
	Fixed(void);							//Constructeur
	Fixed(int const val);
	Fixed(float const val);
	Fixed(const Fixed& fixed);				//Copier le constructeur
	~Fixed(void);							//Destructrice

	Fixed& operator=(const Fixed& rhs);		//Opérateur d'assignation

	//Opérateurs de comparaison
	bool operator>(const Fixed& rhs);		
	bool operator<(const Fixed& rhs);		
	bool operator>=(const Fixed& rhs);		
	bool operator<=(const Fixed& rhs);		
	bool operator==(const Fixed& rhs);		
	bool operator!=(const Fixed& rhs);		

	//Opérateurs arithmétiques
	Fixed operator+(const Fixed& rhs);		
	Fixed operator-(const Fixed& rhs);		
	Fixed operator*(const Fixed& rhs);		
	Fixed operator/(const Fixed& rhs);		

	//Opérateurs d'incrémentation/décrémentation unaires
	Fixed& operator++();					
	Fixed& operator--();					
	Fixed operator++(int);					
	Fixed operator--(int);					

	// G
	int getRawBits(void) const;

	// S
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
	static			Fixed& min(Fixed& a, Fixed& b);
	static const	Fixed& min(const Fixed& a, const Fixed& b);
	static			Fixed& max(Fixed& a, Fixed& b);
	static const	Fixed& max(const Fixed& a, const Fixed& b);

private:
	static int const fraction = 8;
	int _fixedPoint;
};
std::ostream& operator<<(std::ostream& o, const Fixed& fixed);