#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mas_array;
    cout << "Enter array: "; cin >> mas_array;
    for (int i = 0; i < mas_array.size(); ++i) {
        cout << "[" << i << "]: " << mas_array[i] << endl;
    }
}


