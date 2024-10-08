/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:11:10 by lagea             #+#    #+#             */
/*   Updated: 2024/09/30 11:13:28 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"
#include "../inc/DiamondTrap.hpp"
#include "../inc/ClapTrap.hpp"
#include "../inc/FragTrap.hpp"

int	main(void)
{
	std::string s1 = "Clyde";
	std::string s2 = "Scarlet";
	std::string s3 = "Fred";
	std::string s4 = "Diego";

	ClapTrap clap(s1);
	std::cout
		<< "ClapTrap hp : " << clap.getHitPoints() << std::endl
		<< "ClapTrap ep : " << clap.getEnergyPoints() << std::endl
		<< "ClapTrap ad : " << clap.getAttackDamage() << std::endl;

	ScavTrap scav(s3);
	std::cout
		<< "ScavTrap hp : " << scav.getHitPoints() << std::endl
		<< "ScavTrap ep : " << scav.getEnergyPoints() << std::endl
		<< "ScavTrap ad : " << scav.getAttackDamage() << std::endl;
		
	FragTrap frag(s2);
	std::cout
		<< "Fragtrap hp : " << frag.getHitPoints() << std::endl
		<< "Fragtrap ep : " << frag.getEnergyPoints() << std::endl
		<< "Fragtrap ad : " << frag.getAttackDamage() << std::endl;

	// Constructors
	DiamondTrap	diamondtrap(s4);
	std::cout << std::endl;
	diamondtrap.whoAmI();
	std::cout
		<< "Diamodtrap hp : " << diamondtrap.getHitPoints() << std::endl
		<< "Diamodtrap ep : " << diamondtrap.getEnergyPoints() << std::endl
		<< "Diamodtrap ad : " << diamondtrap.getAttackDamage() << std::endl;
		
	std::cout << "\n\n";
	
	// Repairs
	diamondtrap.takeDamage(14);
	diamondtrap.beRepaired(18);
	std::cout << std::endl;

	// New class attack until exhaustion
	diamondtrap.attack(s2);
	diamondtrap.attack(s2);
	diamondtrap.attack(s2);
	std::cout << std::endl;

	diamondtrap.guardGate();
	diamondtrap.attack(s2);
	std::cout << std::endl;

	// New class personal method call
	diamondtrap.highFivesGuys();
	std::cout << std::endl;

	diamondtrap.whoAmI();
	std::cout << std::endl;
	// Repair over max hp
	diamondtrap.beRepaired(18);

	// Take damage
	diamondtrap.takeDamage(50);

	// Die
	diamondtrap.takeDamage(50);

	// Do something after dying
	diamondtrap.beRepaired(20);
	diamondtrap.attack(s2);

	std::cout << std::endl;
	return (0);
}
