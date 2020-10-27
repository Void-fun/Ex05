#include <iostream>
#define INT_MAX 2147483647

template<typename T>
T minArr(T* arr) {
	int len = sizeof(arr) / sizeof(arr[0]);
	int min{ INT_MAX };
	for (size_t i = 0; i < len; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}