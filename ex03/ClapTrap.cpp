/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:37:51 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 19:34:49 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :
	_name("No name"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap constructor called: " << this->_name << std::endl;

	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "ClapTrap constructor called: " << src._name << std::endl;

	*this = src;

	return ;
}

ClapTrap::ClapTrap( std::string name ) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap constructor called: " << name << std::endl;

	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called: " << this->_name << std::endl;

	return ;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs ) {
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoint();
		this->_energyPoints = rhs.getEnergyPoint();
		this->_attackDamage = rhs.getAttackDamage();
	}

	return *this;
}

std::string	ClapTrap::getName( void ) const
{
	return this->_name;
}

int	ClapTrap::getHitPoint( void ) const
{
	return this->_hitPoints;
}

int	ClapTrap::getEnergyPoint( void ) const
{
	return this->_energyPoints;
}

int	ClapTrap::getAttackDamage( void ) const
{
	return this->_attackDamage;
}

void	ClapTrap::attack( const std::string& target )
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {

		std::cout << "ClapTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;

		this->_energyPoints -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " canno't do nothing..." << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;

	if ((unsigned int)this->_hitPoints > amount)
		this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {

		std::cout << "ClapTrap " << this->_name << " get " << amount
			<< " hit points back!" << std::endl;

		this->_hitPoints += amount;
		this->_energyPoints -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " canno't do nothing..." << std::endl;
}
