#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <iomanip>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = Account::_nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	Account::_nbAccounts++;
	Account::_totalAmount += _amount;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::Account(void)
{
	_accountIndex = Account::_nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = 0;
	Account::_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount" << _amount << ";closed";
	Account::_nbAccounts--;
	if (Account::_nbAccounts > 0)
		std::cout << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t		timestamp = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	tm				utc_tm = *localtime(&timestamp);

	std::cout << std::setfill('0') << "[" << (utc_tm.tm_year + 1900)
					<< std::setw(2) << utc_tm.tm_mon
					<< std::setw(2) << utc_tm.tm_mday << "_"
					<< std::setw(2) << utc_tm.tm_hour
					<< std::setw(2) << utc_tm.tm_min
					<< std::setw(2) << utc_tm.tm_sec << "] ";
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();

	_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	std::cout << "index:" <<  _accountIndex << ";p_amount:" << _amount
			<< ";deposit:" << deposit << ";amount:" << _amount + deposit
			<< ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	bool	result;

	result = false;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawals:";
	if ((_amount - withdrawal) < 0)
		std::cout << "refused" << std::endl;
	else
	{
		result = true;
		_amount -= withdrawal;
		_nbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	return (result);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}
