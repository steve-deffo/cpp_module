/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:29:38 by desteve           #+#    #+#             */
/*   Updated: 2023/06/22 14:53:50 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Harl
{
public:
	// Constructor/Destructor
	Harl(void);
	~Harl(void);

	void complain(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};
