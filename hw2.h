#ifndef HW2_H_
#define HW2_H_
#include <iostream>
#include <time.h>
using namespace std;
void swap(int* arr, int in1, int in2);

int minuss(int n);

int ch_to_5(int n);

int ch_to_r(int n);

void rever(int* arr, unsigned int size, void(*f2)(int* arr, int in1, int in2));

void map(int* arr, unsigned int size, int (*f1)(int));

void wout(int* arr, unsigned int size);
#endif
