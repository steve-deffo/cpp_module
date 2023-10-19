/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:55:58 by desteve           #+#    #+#             */
/*   Updated: 2023/06/17 20:13:55 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int    main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; argv[i][j]; j++)
                std::cout << (char)std::toupper(argv[i][j]);
        }
    }
    std::cout << std::endl;
    return (0);
}
