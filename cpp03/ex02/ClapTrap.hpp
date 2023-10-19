/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:12:21 by desteve           #+#    #+#             */
/*   Updated: 2023/07/04 02:35:04 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ClapTrap
{
public:
	// Constructors/Destructor
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);

	ClapTrap& operator=(const ClapTrap& rhs);

	~ClapTrap();

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_ep;
	unsigned int	_ad;
};