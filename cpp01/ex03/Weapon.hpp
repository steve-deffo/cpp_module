/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:21:43 by desteve           #+#    #+#             */
/*   Updated: 2023/06/20 21:10:58 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon
{
public:
	// Constructors/Destructors
	Weapon(std::string type);
	~Weapon(void);

	// Getters
	std::string const & getType(void) const;

	// Setters
	void setType(std::string type);

private:
	std::string _type;
};