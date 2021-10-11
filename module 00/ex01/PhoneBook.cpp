#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::promt()
{
	std::cout << "📖 > ";
}

Contact& PhoneBook::get_contact(int index)
{
    return (users[index]);
}
