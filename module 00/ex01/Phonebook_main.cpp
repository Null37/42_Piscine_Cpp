#include "PhoneBook.hpp"
#include "Contact.hpp"

void err_exit()
{
	if (std::cin.eof())
	{
		std::cout << "\n 📕 BYE (´^ω^)ノ\n";
		exit(0);
	}
}

int main()
{
	PhoneBook book;

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
		book.promt();
		std::getline(std::cin,cmd);
		err_exit();
		clear_all(&f_n, &l_n, &ds, &nk_n, &ph_n);
		if (cmd == "ADD")
		{
			while (f_n.length() <= 0)
			{
				std::cout << "Enter your first name: " ;
				f_n.clear();
				std::getline(std::cin,f_n);
				err_exit();
			}
			while (l_n.length() <= 0)
			{
				std::cout << "Enter your last name: " ;
				l_n.clear();
				std::getline(std::cin, l_n);
				err_exit();
			}
			while (nk_n.length() <= 0)
			{
				std::cout << "Enter your nackename: " ;
				nk_n.clear();
				std::getline(std::cin, nk_n);
				err_exit();
			}
			while (ds.length() <=0)
			{
				std::cout << "what is your dark scret: " ;
				ds.clear();
				std::getline(std::cin, ds);
				err_exit();
			}
			while (ph_n.length() <= 0)
			{
				std::cout << "Enter your phone number: ";
				std::getline(std::cin, ph_n);
				err_exit();
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
				book.get_contact(nc).getf_n().clear();
				book.get_contact(nc).getl_n().clear();
				book.get_contact(nc).getnk_n().clear();
				book.get_contact(nc).getds().clear();
				book.get_contact(nc).set(f_n, l_n, nk_n, ds, stoll(ph_n));
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
				if (book.get_contact(i).getf_n().length() > 10)
					fn = subnoalloc(book.get_contact(i).getf_n());
				else
					fn = book.get_contact(i).getf_n();
				if (book.get_contact(i).getl_n().length() > 10)
					ln = subnoalloc(book.get_contact(i).getl_n());
				else
					ln = book.get_contact(i).getl_n();
				if (book.get_contact(i).getnk_n().length() > 10)
					nk = subnoalloc(book.get_contact(i).getnk_n());
				else
					nk = book.get_contact(i).getnk_n();
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
					err_exit();
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
					std::cout << "Error: this input not in your book" << "\n";
					break;
				}
				if (num > 7 || num < 0 || num > max_nc)
				{
					std::cout << "Error: this input not IN your book" << "\n";
					break;
				}
				else
					{
						if (book.get_contact(num).getf_n().empty() == true)
						{
							std::cout << "Error: this input not in your book" << "\n";
							break;
						}
						std::cout << "first name : " << book.get_contact(num).getf_n() << "\n"
								<< "last name: " << book.get_contact(num).getl_n() << "\n"
								<< "nickname: " << book.get_contact(num).getnk_n() << "\n"
								<< "phone number: " << book.get_contact(num).getp_n() << "\n"
								<< "darkest secret : " << book.get_contact(num).getds() << "\n";
					}
				in.clear();
			}
		}
		else if (cmd == "EXIT")
		{
			std::cout << "📕 BYE (´^ω^)ノ\n";
			exit(0);
		}
	}
}