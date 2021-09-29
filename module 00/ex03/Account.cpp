#include <iostream>
#include <fstream>
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
	std::cout << "[19920104_091532] " << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";" << "created\n";
}

void Account::displayAccountsInfos( void )
{
	std::cout << "[19920104_091532] " << "accounts:" << _nbAccounts << ";"
			  << "total:" << _totalAmount << ";" << "deposits:" << _totalNbDeposits
			  << ";" << "withdrawals:" << _totalNbWithdrawals << "\n";
}

void Account::displayStatus( void )const
{
	std::cout << "[19920104_091532] " << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";" << "deposits:" << _nbDeposits
			  << ";" << "withdrawals:" << _nbWithdrawals << "\n";

}
void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "[19920104_091532] " << "index:" << _accountIndex << ";"
			  << "p_amount:" << _amount << ";" << "deposit:" << deposit
			  << ";" << "amount:" << (_amount + deposit) << ";"
			  << "nb_deposits:" << _nbDeposits << "\n";
	_totalAmount += deposit;
	_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "[19920104_091532] " << "index:" << _accountIndex << ";"
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
	std::cout << "[19920104_091532] " << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "closed\n";
};


