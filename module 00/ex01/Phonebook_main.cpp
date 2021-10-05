#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

int main()
{
	Contact users[9];
	std::string cmd;
	std::string f_n;
	std::string l_n;
	std::string ds;
	std::string nk_n;
	std::string ph_n;
	long nc = 0;
	int max_nc = 0;
	std::cout << "-----------------------\nthe command can use is: \n*ADD\n*SEARCH\n*EXIT\n------------" << std::endl;
	while (1)
	{
		users->promt();
		std::getline(std::cin,cmd);
		if (std::cin.eof())
		{
			std::cout << "EOF\n";
			exit(0);
		}
		clear_all(&f_n, &l_n, &ds, &nk_n, &ph_n);
		if (cmd == "ADD")
		{
			while (f_n.length() <= 0)
			{
				std::cout << "Enter your first name: " ;
				f_n.clear();
				std::getline(std::cin,f_n);
			}
			while (l_n.length() <= 0)
			{
				std::cout << "Enter your last name: " ;
				l_n.clear();
				std::getline(std::cin, l_n);
			}
			while (nk_n.length() <= 0)
			{
				std::cout << "Enter your nackename: " ;
				nk_n.clear();
				std::getline(std::cin, nk_n);
			}
			while (ds.length() <=0)
			{
				std::cout << "what is your dark scret: " ;
				ds.clear();
				std::getline(std::cin, ds);
			}
			while (ph_n.length() <= 0)
			{
				std::cout << "Enter your phone number: ";
				std::getline(std::cin, ph_n);
				int ln = ph_n.length();
				for (int i= 0; i < ln; i++)
				{
					if (std::isdigit(ph_n[i]) == 0)
					{
						ph_n.clear();
						break;
					}
				}
			}
			if (nc >= 8)
				nc = 0;
			if (nc < 8)
			{
				users[nc].getf_n().clear();
				users[nc].getl_n().clear();
				users[nc].getnk_n().clear();
				users[nc].getds().clear();
				users[nc].set(f_n, l_n, nk_n, ds, stoll(ph_n));
				ph_n.clear();
			}
			nc++;
			if (max_nc < 8)
				max_nc++;
		}
		else if (cmd == "SEARCH")
		{
			std::string fn;
			std::string ln;
			std::string nk;
			std::cout << std::setw(10)
					<< "index" << "|" << "first name" << "|" << std::setw(10)
					<< "last name" << "|" <<std::setw(10) << "nickname" << "|\n";
			for(int i = 0; i < max_nc; i++)
			{
				if (users[i].getf_n().length() > 10)
					fn = subnoalloc(users[i].getf_n());
				else
					fn = users[i].getf_n();
				if (users[i].getl_n().length() > 10)
					ln = subnoalloc(users[i].getl_n());
				else
					ln = users[i].getl_n();
				if (users[i].getnk_n().length() > 10)
					nk = subnoalloc(users[i].getnk_n());
				else
					nk = users[i].getnk_n();
				std::cout << std::right << std::setw(10) << i << "|" << std::setw(10) << fn << "|"
						<< std::setw(10) << ln << "|" << std::setw(10) << nk << "|\n";
			}
			while(1)
			{
				std::string in;
				int c = 1;
				int num = -11;
				while(in.length() <= 0)
				{
					std::cout << "index> ";
					std::getline(std::cin, in);
					int lin = in.length();
					for (int i = 0; i < lin; i++)
					{
						if (std::isdigit(in[i]) == 0)
						{
							c = 0;
							break;
						}
					}
				}
				if (c == 1)
					num =  stoi(in);
				else
				{
					std::cout << "Error: this input not your book" << "\n";
					break;
				}
				if (num > 7 || num < 0 || num > max_nc)
				{
					std::cout << "Error: this input not your book" << "\n";
					break;
				}
				else
					{
						if (users[num].getf_n().empty() == true)
						{
							std::cout << "Error: this input not your book" << "\n";
							break;
						}
						std::cout << std::setw(10)
								<< "index" << "|" << "first name" << "|" << std::setw(10)
								<< "last name" << "|" << std::setw(10) << "nickname" << "|\n";
						if (users[num].getf_n().length() > 10)
							fn = subnoalloc(users[num].getf_n());
						else
							fn = users[num].getf_n();
						if (users[num].getl_n().length() > 10)
							ln = subnoalloc(users[num].getl_n());
						else
							ln = users[num].getl_n();
						if (users[num].getnk_n().length() > 10)
							nk = subnoalloc(users[num].getnk_n());
						else
							nk = users[num].getnk_n();
						std::cout << std::right << std::setw(10) << num << "|" << std::setw(10) << fn << "|"
								<< std::setw(10) << ln << "|" << std::setw(10) << nk << "|\n";
					}
				in.clear();
			}
		}
		else if (cmd == "EXIT")
		{
			std::cout << "exit📕\n";
			exit(0);
		}
	}
}