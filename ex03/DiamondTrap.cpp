/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:46:28 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 19:36:17 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("default_clap_name")
{
	this->_name = "default";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::h3ll0Th3C0rr3ct0r;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap constructor called: " << this->_name << std::endl;

	return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::h3ll0Th3C0rr3ct0r;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap constructor called: " << this->_name << std::endl;

	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src )
{
	std::cout << "DiamondTrap constructor called: " << this->_name << std::endl;

	*this = src;

	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called: " << this->_name << std::endl;

	return ;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
		*this = rhs;

	return *this;
}

void	DiamondTrap::whoAmI( void ) const
{
	std::cout << "DiamondTrap name: " << this->_name << std::endl
		<< "ClapTrap name: " << this->ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack( const std::string & target )
{
	ScavTrap::attack(target);
}
