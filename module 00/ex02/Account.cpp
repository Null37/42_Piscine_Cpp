#include <iostream>
#include <fstream>
#include <ctime>
#include "Account.hpp"

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

int Account::checkAmount(void)const
{
	return (_amount);
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
Account::Account(int initial_deposit) 
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";" << "created\n";
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"
			  << "total:" << _totalAmount << ";" << "deposits:" << _totalNbDeposits
			  << ";" << "withdrawals:" << _totalNbWithdrawals << "\n";
}

void Account::displayStatus( void )const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";" << "deposits:" << _nbDeposits
			  << ";" << "withdrawals:" << _nbWithdrawals << "\n";

}
void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount:" << _amount << ";" << "deposit:" << deposit
			  << ";" << "amount:" << (_amount + deposit) << ";"
			  << "nb_deposits:" << _nbDeposits << "\n";
	_totalAmount += deposit;
	_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount:" << _amount << ";" << "withdrawal:";
	if (withdrawal > _amount)
		std::cout << "refused\n";
	else
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << withdrawal << ";" << "amount:" << (_amount - withdrawal)
				  << ";" << "nb_withdrawals:" << _nbWithdrawals << "\n";
		_amount -= withdrawal;
	}
	return 0;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "closed\n";
};

void Account::_displayTimestamp(void)
{
	time_t ttime = time(0);
	tm *local_time = localtime(&ttime);
	std::cout << 1900 + local_time->tm_year;
	std::cout << std::setw(2) << std::setfill('0') << local_time->tm_mon;
	std::cout << std::setw(2) << std::setfill('0') << local_time->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << std::setfill('0') << 1 + local_time->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << 1 + local_time->tm_min;
    std::cout << std::setw(2) << std::setfill('0')<< 1 + local_time->tm_sec << " ";
}
