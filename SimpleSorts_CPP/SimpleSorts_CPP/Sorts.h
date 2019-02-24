#pragma once

static void Bubble(int* numbers, int size)
{
	bool IsSwapping;
	do
	{
		IsSwapping = false;
		for (int i = 1; i < size; i++)
		{
			if (numbers[i] < numbers[i - 1])
			{
				IsSwapping = true;
				int temp = numbers[i];
				numbers[i] = numbers[i - 1];
				numbers[i - 1] = temp;
			}
		}
	} while (IsSwapping);
};

static void Selection(int* numbers, int size)
{
	for (int j = 0; j < size; j++)
	{
		int small = j;
		for (int i = j + 1; i < size; i++)
		{
			if (numbers[i] < numbers[small])
			{
				small = i;
			}
		}
		int temp = numbers[small];
		numbers[small] = numbers[j];
		numbers[j] = temp;
	}
};

static void Insertion(int* numbers, int size)
{
	for (int sorted = 0; sorted < size; sorted++)
	{
		for (int i = sorted; i > 0; i--)
		{
			if (numbers[i] < numbers[i - 1])
			{
				int temp = numbers[i];
				numbers[i] = numbers[i - 1];
				numbers[i - 1] = temp;
				continue;
			}
			break;
		}
	}
}

