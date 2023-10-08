/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:50:56 by kscordel          #+#    #+#             */
/*   Updated: 2023/10/05 18:56:10 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += _amount;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account( void )
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	if (deposit > 0)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << _amount << ";";
		std::cout << "deposit:" << deposit << ";";
		_amount += deposit;
		std::cout << "amount:" << _amount << ";";
		_nbDeposits++;
		std::cout << "nb_deposits:" << _nbDeposits << std::endl;
		_totalAmount += deposit;
		_totalNbDeposits++;
	}
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (withdrawal <= _amount)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		_amount -= withdrawal;
		std::cout << "amount:" << _amount << ";";
		_nbWithdrawals++;
		std::cout << "nbWithdrawal:" << _nbWithdrawals << std::endl;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return true;
	}
	std::cout << "withdrawal:refused" << std::endl;
	return false;		
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ":";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t timeSeconde = std::time(NULL);
	struct tm *timedate = std::localtime(&timeSeconde);

	std::cout << std::setfill('0') << "[" << 1900 + timedate->tm_year
		<< std::setw(2) << 1 + timedate->tm_mon
		<< std::setw(2) << timedate->tm_mday << "_"
		<< std::setw(2) << timedate->tm_hour
		<< std::setw(2) << timedate->tm_min
		<< std::setw(2) << timedate->tm_sec << "] ";
}
