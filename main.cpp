#include "lion.h"
#include "owl.h"
#include "shark.h"
int main()
{
	Lion lion1("Simba");
	Lion lion2("Musafa");
	Owl owl("Hedwig");
	Shark shark("Jaws");
	std::vector<Animals*> zoo = { &lion1, &lion2,&owl,&shark };
	for (std::vector<Animals*>::iterator it = zoo.begin(); it != zoo.end(); it++)
	{
		std::cout << **it << std::endl;
	}


	return 0;
}
