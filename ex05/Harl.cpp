/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:19:41 by bammar            #+#    #+#             */
/*   Updated: 2023/02/19 21:46:55 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};
Harl::~Harl(){};

void Harl::debug(void)
{
	std::cout << "I love having extra bacon "
	"for my 7XL-double-cheese-triple-pickle-specialketchup burger. "
	"I really do!\n";
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
	"You didn't put enough bacon in my burger! If you did, "
	"I wouldn't be asking for more!";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
	"I've been coming for"
	"years whereas you started working here since last month.";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
}

void Harl::complain(std::string level)
{
	;
}
