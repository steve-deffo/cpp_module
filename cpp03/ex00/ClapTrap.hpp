/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:07:17 by desteve           #+#    #+#             */
/*   Updated: 2023/07/04 02:41:10 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ClapTrap
{
public:
	// C/D
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);

	ClapTrap& operator=(const ClapTrap& rhs);

	~ClapTrap();

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_ep;
	unsigned int	_ad;
};