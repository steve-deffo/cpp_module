/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 08:55:50 by desteve           #+#    #+#             */
/*   Updated: 2023/06/17 08:58:24 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].setName(name + std::to_string(i + 1));
	return horde;
}