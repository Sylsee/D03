/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:38:23 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 17:41:34 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main( void )
{
	ClapTrap	noName;

	ClapTrap	Bob("Bob");
	ClapTrap	Jean("Jean");

	Bob.attack("Solar system");
	Jean.takeDamage(3);
	std::cout << "Jean hit points: " << Jean.getHitPoint() << std::endl;
	Jean.beRepaired(2);
	std::cout << "Jean hit points: " << Jean.getHitPoint() << std::endl;
	Jean.beRepaired(1);
	std::cout << "Jean hit points: " << Jean.getHitPoint() << std::endl;

	return 0;
}
