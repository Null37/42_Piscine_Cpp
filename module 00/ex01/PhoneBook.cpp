#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickename;
	std::string dark_scret;
	long long phone_number;
public:
	void promt()
	{
		std::cout << "📖 > ";
	}
	void set(std::string f_n, std::string l_n, std::string nk_n, std::string ds, long long pn)
	{
		first_name = f_n;
		last_name = l_n;
		nickename = nk_n;
		dark_scret = ds;
		phone_number = pn;
	}
	std::string getf_n() // git fisrt name
	{
		return first_name;
	}
	std::string getl_n() // get last name
	{
		return last_name;
	}
	std::string getnk_n()//get nake name
	{
		return nickename;
	}
	std::string getds()// get dark scret
	{
		return dark_scret;
	}
	int getp_n()//get phone number
	{
		return phone_number;
	}
};

std::string subnoalloc(std::string s)
{
	int  i = 10;
	if(s.length() > 10)
	{
		s[9] = '.';
		while(s[i])
		{
			s[i] = '\0';
			i++;
		}
		return (s);
	}
	else
		return (s);
}

void clear_all(std::string *f_n, std::string *l_n, std::string *ds, std::string *nk_n, std::string *ph_n)
{
	f_n->clear();
	l_n->clear();
	ds->clear();
	nk_n->clear();
	ph_n->clear();
}

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
	std::cout << "-----------------------\nthe command can use is: \n*ADD\n*SEARCH\n*EXIT\n------------" << std::endl;
	while (1)
	{
		users->promt();
		std::getline(std::cin,cmd);
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
				for (int i= 0; i < ph_n.length(); i++)
				{
					if (std::isdigit(ph_n[i]) == 0)
					{
						ph_n.clear();
						break;
					}
				}
			}
			if (nc < 8)
			{
				users[nc].set(f_n, l_n, nk_n, ds, stoll(ph_n));
				ph_n.clear();
			}
			if (nc >= 8)
			{
				users[0].getf_n().clear();
				users[0].getl_n().clear();
				users[0].getnk_n().clear();
				// users[0].getp_n().clear();
				users[0].getds().clear();
				users[0].set(f_n, l_n, nk_n, ds, stoll(ph_n));
			}
			nc++;
		}
		else if (cmd == "SEARCH")
		{
			int a;
			std::string fn;
			std::string ln;
			std::string nk;
			std::cout << std::setw(10)
					<< "index" << "|" << "first name" << "|" << std::setw(10)
					<< "last name" << "|" <<std::setw(10) << "nickname" << "|\n";
			if (nc <= 7)
				a = nc - 1;
			else
				a = 7;
			for(int i = 0; i <= a; i++)
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
					for (int i = 0; i < in.length(); i++)
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
					break;
				if (num > 7 || num < 0)
					break;
				else
					{
						std::cout << std::setw(10)
								<< "index" << "|" << "first name" << "|" << std::setw(10)
								<< "last name" << "|" <<std::setw(10) << "nickname" << "|\n";
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