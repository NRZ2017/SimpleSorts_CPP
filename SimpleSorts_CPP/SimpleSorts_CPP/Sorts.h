#pragma once

static void Bubble(int* numbers, int size)
{
	bool IsSorted = false;
	
		if(!IsSorted)
		{
			for (int i = 1; i < size; i++)
			{
				if (numbers[i] < numbers[i-1])
				{
					IsSorted = true;
					int temp = numbers[i];
					numbers[i] = numbers[i - 1];
					numbers[i - 1] = temp;
				}
			}
		}
	
};