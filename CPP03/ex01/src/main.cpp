/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:11:10 by lagea             #+#    #+#             */
/*   Updated: 2024/09/26 17:28:00 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int main()
{
    {
        ScavTrap a;
        ScavTrap b("Zero");
        ScavTrap c(b);
        ScavTrap d = c;

        a.attack("Zero");
        b.beRepaired(10);
        a.takeDamage(15);
        a.attack("Jack Black");
        c.guardGate();
    }
    return 0;
}
