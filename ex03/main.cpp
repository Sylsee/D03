/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:38:23 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 19:34:19 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main( void )
{
	DiamondTrap	noName;

	DiamondTrap	Bob("Bob");
	DiamondTrap	Jean("Jean");

	Bob.attack("Solar system");
	Jean.takeDamage(3);
	std::cout << "Jean hit points: " << Jean.getHitPoint() << std::endl;
	Jean.beRepaired(2);
	std::cout << "Jean hit points: " << Jean.getHitPoint() << std::endl;
	Jean.beRepaired(1);
	std::cout << "Jean hit points: " << Jean.getHitPoint() << std::endl;

	Jean.guardGate();
	Jean.highFivesGuys();
	Jean.whoAmI();

	return 0;
}
