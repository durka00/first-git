#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    const unsigned N = 10;

    int arr1[N] = { 1,5,6,8,5,10,7,15,6,9 };
    int arr2[N] = { 1,2,3,4,5,6,7,8,9,9 };

    for (int i = 0; i < N; ++i)
    {
        if (arr1[i] == arr2[i])
            cout << "индекс в массивах: " << i << " значение: " << arr1[i] << endl;
    }


    return 0;
}