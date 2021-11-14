#include "span.hpp"


// int main()
// {
//     try
//     {
//         span sp(5);
//         sp.addNumber(5);
//         sp.addNumber(3);
//         sp.addNumber(17); 
//         sp.addNumber(9);
//         sp.addNumber(11);
//         // sp.addNumbe(1000);
//         // span sp2 = sp; 
//         // std::cout << sp2.get_v()[0] << std::endl;
				
//        std::cout <<  sp.shortestSpan() << std::endl;
//        std::cout <<  sp.longestSpan() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << e.what() << '\n';
//     }
// }

int main()
{ 
	std::vector<int> test(1000, 8);
	// std::vector<int>::iterator it_test;
	// for(it_test = test.begin(); it_test !=  test.end(); it_test++)
	// 	std::cout << *it_test << " ";
	// std::cout << std::endl;
	// std::cout << test.size() << std::endl;
		try
		{
				span con_V(2000);
				con_V.addNumber(100);
				con_V.addNumber(205);
				con_V.addNumber(test.begin(), test.end());
				con_V.addNumber(500);
			 std::vector<int>::iterator  it;
				for(it=con_V.get_v().begin(); it != con_V.get_v().end(); it++)
						std::cout << *it << " ";
				std::cout << std::endl;
				std::cout << "size = " << con_V.get_v().size() << std::endl;
		}
		catch(const std::exception& e)
		{
				std::cout << e.what() << '\n';
		}
		
}