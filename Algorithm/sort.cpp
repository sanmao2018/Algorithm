#include "sort.h"
void swtich_position(double *a, double *b) {
	double temp = 0.0;
	temp = *a;
	*a = *b;
	*b = temp;
}

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
		int j = i - 1;
		for (; j > 0; j--) {
			if (array[j] < temp) {
				break;
			} 
			else {
				array[j + 1] = array[j];
			}
		}
		array[j + 1] = temp;
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


void shell_sort(double *array, int size) {

	int h = 1;
	double temp = 0.0;
	while (h < size / 3)
	{
		h = 3 * h + 1;
	}
	while (h >= 1) {
		for (int i = 0; i < h; i++) {
			while((i + h) < size) {
				if (array[i] < array[i + h]) {
					temp = array[i];
					array[i + h] = array[i];
					array[i] = temp;
				}
				i = i + h;
			}
		}
		h = h / 3;
	}
}



void meger(double *array, int left, int mid, int right) {
	
	double *a = new double[right - left + 1];
	for (int i = left; i <= right; i++) {
		a[i] = array[i];
	}
	int i = left;
	int j = mid;
	int t = 0;
	while (i < mid && j <= right) {
		if (array[i] < array[j])
			a[t++] = array[i];
		else
			a[t++] = array[j];
	}
	while (i < mid) {
		a[t++] = array[i++];
	}
	while (j < mid) {
		a[t++] = array[j++];
	}


	for (int i = left; i <= right; i++) {
		array[i] = a[i];
	}
}

void sort(double *array, int left, int right) {

	if (right - left + 1 == 2) {
		if (array[right] < array[left])
			swtich_position(&array[right], &array[left]);
	}
	else {
		sort(array, left, (right - left) / 2 - 1);
		sort(array, (right - left) / 2, right);
	}
	meger(array, left, (right - left) / 2, right);
}

void meger_sort(double *array, int size) {

	sort(array, 0, size - 1);

}


void sort1(double *array, int low, int hight) {
	double key = array[low];
	int first = low;
	int last = hight;
	while (first < last)
	{
		while (first < last&&array[first] <= key) {
			first++;
		}
		swtich_position(&array[first], &array[last]);

		while (first < last&&array[last] >= key)
		{
			last--;
		}
		swtich_position(&array[first], &array[last]);
	}
	array[first] = key;
	sort1(array, low, first - 1);
	sort1(array, first + 1, hight);
}

void quick_sort(double *array, int size) {

	sort1(array, 0, size - 1);

}