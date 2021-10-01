#include <iostream>
#include <iomanip>


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

std::string subnoalloc(std::string s) // subster but not use alloc
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

/* clear all string and number to use them again */
void clear_all(std::string *f_n, std::string *l_n, std::string *ds, std::string *nk_n, std::string *ph_n)
{
	f_n->clear();
	l_n->clear();
	ds->clear();
	nk_n->clear();
	ph_n->clear();
}