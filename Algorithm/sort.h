#pragma once
//一些排序的实现


//selection sort function
void selection_sort(double *array, int size);//选择排序，不断选择最小值排序
void insertion_sort(double *array, int size);//将未排序的元素插入到有序序列中
void bubble_sort(double *array, int size);//每轮比较把最小的上浮
void shell_sort(double *array, int size);//改进插入排序的性能，可以比较相隔较远的元素
void meger_sort(double *array, int size);//归并排序，不断拆分排序，之后合并有序序列
void quick_sort(double *array, int size);//快速排序，先切分数组，左数组小于等于切分元素，右边数组大于等于切分元素，之后将两个数组排序