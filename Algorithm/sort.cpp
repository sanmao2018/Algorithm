#include "sort.h"


void selection_sort( double *array, int size) {
	
	double temp = 0.0;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

void insertion_sort(double *array, int size) {
	double temp = 0.0;
	for (int i = 1; i < size; i++) {
		temp = array[i];
		for (int j = i - 1; j > 0; j--) {
			if (array[j] < temp) {
				break;
			}
			else {
				array[j+1] = a[j]
			}
		}
		a[j + 1] = temp;
	}
}

void bubble_sort(double *array, int size) {

	double temp = 0.0;

	for (int i = 0; i < size; i++) {
		bool flag = true;
		for (int j = 0; j < size - i; j++) {
			if (array[j] > array[j++]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j] = temp;
				flag = false;
			}
		}
		if (flag) {
			return;
		}
	}


}