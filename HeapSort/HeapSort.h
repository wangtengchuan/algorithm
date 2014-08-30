#ifndef _HEAPSORT_H_
#define _HEAPSORT_H_
#include <iostream>
using namespace std;
void MinHeapFixup(int a[],int size);
void MinHeapAddNumber(int a[], int size, int nNum);
void MinHeapFixdown(int a[], int i, int n);
void MinHeapDeleteNumber(int a[], int n);
void MakeMinHeap(int a[], int n);
void MinHeapSort(int a[], int n);
#endif