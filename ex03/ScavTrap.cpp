/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:44:23 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 19:45:15 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "ScavTrap constructor called: " << this->_name << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src)
{
	std::cout << "ScavTrap constructor called: " << this->_name << std::endl;

	*this = src;

	return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called: " << this->_name << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called: " << this->_name << std::endl;

	return ;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & src )
{
	if ( this != &src ) {
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}

	return *this;
}

void	ScavTrap::guardGate( void ) const
{
	std::cout << "ScavTrap: " << this->_name << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack( const std::string& target )
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {

		std::cout << "ScavTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;

		this->_energyPoints -= 1;
	}
	else
		std::cout << "ScavTrap " << this->_name << " canno't do nothing..." << std::endl;
}

int const ScavTrap::h3ll0Th3C0rr3ct0r = 50;