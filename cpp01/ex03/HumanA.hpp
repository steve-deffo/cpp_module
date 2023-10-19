/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:21:20 by desteve           #+#    #+#             */
/*   Updated: 2023/06/20 21:07:52 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA
{
public:
	// Constructor/Destructor
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void attack(void) const;
private:
	std::string _name;
	Weapon& _weapon;
};
