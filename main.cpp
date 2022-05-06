#include "hw2.h"

int main()
{
    srand(time(0));
    int arr[4] = { 1, 2, -3, 5 };
    int arr_size = sizeof(arr) / sizeof(int);
    wout(arr, arr_size);
    cout << "Abs to array - 1" << endl
        << "Everything to 5 - 2" << endl
        << "Random values in array - 3" << endl
        << "Reverse array - 4" << endl;
    int choice;
    if (!(cin >> choice) || choice > 4 || choice < 1)
    {
        cout << "Invalid input!";
        return 0;
    }
    int(*f1)(int) = minuss;
    void(*f2)(int* arr, int in1, int in2);
    switch (choice) {
    case 1:
        f1 = minuss;
        break;
    case 2:
        f1 = ch_to_5;
        break;
    case 3:
        f1 = ch_to_r;
        break;
    case 4:
        f2 = swap;
        rever(arr, arr_size, f2);
        wout(arr, arr_size);
        break;
    }
    if (!(choice == 4))
    {
        map(arr, arr_size, f1);
        wout(arr, arr_size);
    }
    return 0;
}
