/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:44:23 by spoliart          #+#    #+#             */
/*   Updated: 2022/01/29 19:47:36 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "FragTrap constructor called: " << this->_name << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	return ;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src)
{
	std::cout << "FragTrap constructor called: " << this->_name << std::endl;

	*this = src;

	return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called: " << this->_name << std::endl;

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called: " << this->_name << std::endl;

	return ;
}

FragTrap &	FragTrap::operator=( FragTrap const & src )
{
	if ( this != &src ) {
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}

	return *this;
}

void	FragTrap::highFivesGuys( void ) const
{
	std::cout << "FragTrap " << this->_name << " : \"Hey high fives guys !!!\"" << std::endl;
}

void	FragTrap::attack( const std::string& target )
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {

		std::cout << "FragTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;

		this->_energyPoints -= 1;
	}
	else
		std::cout << "FragTrap " << this->_name << " canno't do nothing..." << std::endl;
}
