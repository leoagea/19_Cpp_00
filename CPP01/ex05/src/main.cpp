/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 03:24:19 by lagea             #+#    #+#             */
/*   Updated: 2024/09/16 18:27:33 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"
#include <iostream>
#include <string>

int main()
{
    std::string input;
    Harl harl;
    do
    {
        std::cout << "\033[33m\nEnter a level of complaint, DEBUG, INFO, WARNING, ERROR :\033[0m" << std::endl;
        if (!std::getline(std::cin, input))
        {
            std::cout << " " << std::endl;
            exit(1);  
        }
        if (std::cin.eof())
        {
            harl.~Harl();
            exit(1);  
        }
        harl.complain(input);
        
    }while(true);
}
