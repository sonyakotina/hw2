#include "hw2.h"
void swap(int* arr, int in1, int in2)
{
    int t = arr[in1];
    arr[in1] = arr[in2];
    arr[in2] = t;
}
int minuss(int n)
{
    if (n < 0)
    {
        return -n;
    }
    return n;
}
int ch_to_5(int n)
{
    return 5;
}

int ch_to_r(int n)
{
    return rand() % 100;
}
void map(int* arr, unsigned int size, int (*f1)(int))
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = f1(arr[i]);
    }
}
void rever(int* arr, unsigned int size, void(*f2)(int* arr, int in1, int in2))
{
    for (int i = 0; i < size / 2; i++)
    {
        f2(arr, i, (size - 1 - i));
    }
}
void wout(int* arr, unsigned int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
