/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:12:40 by desteve           #+#    #+#             */
/*   Updated: 2023/07/04 02:35:32 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);

	ScavTrap& operator=(const ScavTrap& rhs);

	~ScavTrap();

	void attack(std::string const & target);
	void guardGate();
};