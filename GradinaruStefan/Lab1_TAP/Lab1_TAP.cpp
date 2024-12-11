#include <iostream>

using namespace std;

//Bubble sort

/*void sort_bubbles(int v[], int n) {
    int m, aux;

    m = 0;
    while (!m) {
        m = 1;
        for (int i = 0; i < n; i++) {
            if (v[i - 1] > v[i]) {
                aux = v[i - 1];
                v[i - 1] = v[i];
                v[i] = aux;
                m = 0;
            }

        }
    }
}

int main()
{
    int n, v[100];
    cout << "Enter the string length: " << endl;
    cin >> n;
    cout << " Enter the string elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort_bubbles(v, n);
    cout << "The sorted string is: " << endl;
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}*/


//permutation sort

void permutation(int v[], int n) {
int aux;

for(int i = 0; i < n - 1; i++){
    for(int j = i + 1; j < n; j++){
         if (v[i] > v[j]){

        aux=v[i];
        v[i]=v[j];
        v[j]=aux;}
    }
}
}

int main()
{
    int n, v[100];
    cout<<"Enter the string length:"<<endl;
    cin>>n;
    cout<<" Enter the string elements: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    permutation(v,n);
    cout<<" The sorted string is: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}