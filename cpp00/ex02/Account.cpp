/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <asebrech@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:54:20 by asebrech          #+#    #+#             */
/*   Updated: 2022/01/27 16:49:33 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>

Account::Account( int initial_deposit ) : _amount(initial_deposit) {

	this->_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_totalAmount += this->_amount;	
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void ) {

	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit ) {

	int	p_amount = this->_amount;

	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits += 1;
	_totalNbDeposits += 1;

	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits  << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	int	p_amount = this->_amount;

	if (this->_amount - withdrawal >= 0) {

		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		this->_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;

		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals  << std::endl;

		return 0;
	}
	else {	

		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:"<< p_amount << ";withdrawal:refused" << std::endl;
	
		return 1;
	}
}

int		Account::checkAmount( void ) const {

	return this->_amount;
}

void	Account::displayStatus( void ) const {

	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void ) {

	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {

	time_t rawtime;
	struct tm * timeinfo;
	char buffer [80];

	time (&rawtime);
	timeinfo = localtime (&rawtime);

	strftime (buffer,80,"[%Y%m%d_%H%M%S]",timeinfo);
	std::cout << buffer;

	return ;	
}

int	Account::getNbAccounts( void ) {

	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {

	return _totalAmount;
}

int	Account::getNbDeposits( void ) {

	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {

	return _totalNbWithdrawals;
}

int	Account::_nbAccounts = 0;

int	Account::_totalAmount = 0;

int	Account::_totalNbDeposits = 0;

int	Account::_totalNbWithdrawals = 0;
