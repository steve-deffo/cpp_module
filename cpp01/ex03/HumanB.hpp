/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:21:30 by desteve           #+#    #+#             */
/*   Updated: 2023/06/20 21:08:52 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
public:
	// Constructor/Destructor
	HumanB(std::string name);
	~HumanB(void);

	// Setters
	void setWeapon(Weapon& weapon);

	void attack(void) const;
private:
	std::string _name;
	Weapon* _weapon;
};