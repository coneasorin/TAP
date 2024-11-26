#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>

using namespace std;

// Se da un vector cu n elemente, unde n este nr. natural citit de la tastatura
// sa se citeasca n elemente si sa se afiseze vectorul sortat folosind metoda bulelor

void static BubbleSort(int arr[], int n) {
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int k = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = k;
            }
        }
    }
}

void static InsertSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int k = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
}

/* Sortare BubbleSort (subrutina)

int main()
{
    int n, i;
    cout << "introduce marime (maxim 50): ";
    cin >> n;
    int* arr = new int[n];
    cout << "Introduce " << n << " numere: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\nSortare (BubbleSort):\n";

    BubbleSort(arr, n);

    cout << "\nSortat!\n";
    cout << "\nVectorul sortat: \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    system("pause");
    delete[] arr;
    return 0;
}
*/

// Sortare prin inserare (cu subrutina)
int main() {

    int n, i;
    cout << "Introduce marine: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Introduce " << n << " numere: ";
    for (i = 0; i < n; i++) 
        cin >> arr[i];
    cout << "\nVectorul curent:" << endl;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\nSortare (Inserare) activat...\n";

    InsertSort(arr, n);

    cout << "\nSortat!\n";
    cout << "\nVectorul sortat: \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    system("pause");
    delete[] arr;
    return 0;
} 




