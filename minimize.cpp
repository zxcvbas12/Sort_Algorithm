#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "enter size: ";
    cin >> size;

    int A[size];
    int B[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter A[" << i + 1 << "]";
        cin >> A[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << "enter B[" << i + 1 << "]";
        cin >> B[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (B[j] < B[j + 1])
            {
                int temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }

    int s;
    for (int i = 0; i < size; i++)
    {
        s += A[i] * B[i];
    }
    cout << s;
    return 0;
}