#include <stdio.h>

int main()
{
	int size_of_array=0;
	printf("Size of array?: ");
	scanf("%d", &size_of_array);
	size_of_array--;
	int array[size_of_array];
	for (int i=0;i<=size_of_array;i++)
	{
		scanf("%d", &array[i]);
	}
	int max_сounter=0;
	int max_element=0;
	for (int i = 0; i <= size_of_array; i++)
	{
		int transitive_element = array[i];
		int counter = 0;
		for (int j = 0; j <= size_of_array; j++)
		{
			if (transitive_element == array[j])
				counter++;
		}
		if (counter > max_element)
		{
			max_сounter=counter;
			max_element = temp;
		}
	}
	printf("Counter:%d \n, Which is max:%d", max_сounter, max_element);
	return 0;
}
