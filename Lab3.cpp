#include <stdio.h>

int main()
{
	int sizeOfArray=0;
	printf("Size of array?: ");
	scanf("%d", &sizeOfArray);
	sizeOfArray--;
	int array[sizeOfArray];
	for (int i=0;i<=sizeOfArray;i++)
	{
		scanf("%d", &array[i]);
	}
	int max_Counter=0;
	int max_element=0;
	for (int i = 0; i <= sizeOfArray; i++)
	{
		int transitive_element = array[i];
		int counter = 0;
		for (int j = 0; j <= n; j++)
		{
			if (transitive_element == array[j])
				counter++;
		}
		if (counter > max_max)
		{
			max_Counter=counter;
			max_element = temp;
		}
	}
	printf("Counter:%d \n, Which is max:%d", max_Counter, max_element);
	return 0;
}
