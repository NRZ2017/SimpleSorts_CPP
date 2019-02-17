#include <iostream>
#include "Sorts.h"
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	int* nums = new int[5];

	for (int i = 0; i < 5; i++)
	{
		nums[i] = rand() % 100 + 1;
		//std::cout << nums[i] << std::endl;
	}

	Bubble(nums, 6);

	for (int i = 0; i < 5; i++)
	{
		std::cout << nums[i] << std::endl;
	}
	system("PAUSE");

};
