#include <iostream>
using namespace std;

void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n"
         << endl;
}
void bubblesort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cout << "enter number elements to be sorted:";
    cin >> n;
    cout << "Enter the elements : \n";
    int A[n];
    for (int k = 0; k < n; k++)
    {
        cin >> A[k];
    }
    cout << "List Before Sorting:\n";
    printarray(A, n);
    bubblesort(A, n);
    cout << "List After Sorting:\n";
    printarray(A, n);
}