#include <iostream>
using namespace std;
void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
}
void insertionsort(int *A, int n)
{
    int key, j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements to sort :";
    cin >> n;
    int A[n];
    cout << "Enter the Elements:\n";
    for (int k = 0; k < n; k++)
    {
        cin >> A[k];
    }
    cout << "List Before Sorting:\n";
    printarray(A, n);
    insertionsort(A, n);
    cout << "List After Sorting:\n";
    printarray(A, n);
    return 0;
}