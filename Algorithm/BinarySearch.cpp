#include "stdafx.h"
#include "BinarySearch.h"
//数据必须是排过序的,正序
int BinarySearch::binarySearch(double * array, int size, double key)
{
	int start = 0;
	int end = size -1;
	int mid = start + (end - start) / 2;
	while (start < end)
	{
		if (key < array[mid]) {
			end = mid - 1;
			mid = start + (end - start) / 2;
		}
		else if (key > array[mid]) {
			start = mid + 1;
			mid = start + (end - start) / 2;
		}
		else {
			return mid;
		}

	}

	return -1;
}
