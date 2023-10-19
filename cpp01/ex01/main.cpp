/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 08:54:18 by desteve           #+#    #+#             */
/*   Updated: 2023/06/17 08:58:27 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int const count = 42;
	Zombie *horde = zombieHorde(count, "zombie");

	horde->announce();
	for (int i = 0; i < count; i++)
		horde[i].announce();
	delete [] horde;
}