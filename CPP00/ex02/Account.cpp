/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:30:07 by lbuccher          #+#    #+#             */
/*   Updated: 2022/05/03 14:30:10 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts ++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << initial_deposit << ';';
	std::cout << "created" << std::endl;
	return;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "closed" << std::endl;
	return;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "account:" << getNbAccounts() << ';';
	std::cout << "total:" << getTotalAmount() << ';';
	std::cout << "deposits:" << getNbDeposits() << ';';
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "p_amount:" << _amount << ';';
	std::cout << "deposit:" << deposit << ';';
	std::cout << "amount:" << _amount + deposit << ';';
	std::cout << "nb_deposits:" << ++_nbDeposits << std::endl;

	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "p_amount:" << _amount << ';';
	if (checkAmount() < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	std::cout << "withdrawal:" << withdrawal << ';';
	std::cout << "amount:" << _amount - withdrawal << ';';
	std::cout << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;

	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals ++;
	return true;
}


int		Account::checkAmount( void ) const
{
	return  (_amount);
}

void	Account::_displayTimestamp( void )
{

	time_t		timer = time(NULL);
	struct tm	*tme = localtime(&timer);

	time(&timer);
	std::cout << '[' << tme->tm_year + 1900
				<< std::setw(2) << std::setfill('0') << tme->tm_mon
				<< std::setw(2) << std::setfill('0') << tme->tm_mday
				<< "_" << std::setw(2) << std::setfill('0') << tme->tm_hour 
				<< std::setw(2) << std::setfill('0') << tme->tm_min 
				<< std::setw(2) << std::setfill('0') << tme->tm_sec << "] ";

}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "deposits:" << _nbDeposits << ';';
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}
