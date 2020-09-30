#include <iostream>
#include "nefroid.h"
#include "util.h"
#include "menu.h"

int main()
{
	//nefroid Nefroid(10);
	//std::cout << Nefroid.GetEquation() << std::endl << std::endl;
	//nefroid Nefroid2[3] = {nefroid(20), nefroid(10), nefroid()};
	//for (int i = 0; i < 3; i++) {
	//	std::cout << Nefroid2[i].GetEquation() << std::endl << std::endl;
	//}
	try {
		nefroid Nefroid1;
		dialog(Nefroid1);
	}
	catch (std::bad_alloc & b_a)
	{
		std::cout << "Bad alloc" << std::endl << b_a.what() << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << "Exception" << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Smth was wrong" << std::endl;
	}

	return 0;
}