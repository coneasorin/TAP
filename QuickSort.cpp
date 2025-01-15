#include <iostream>

using namespace std;


void qs(int v[], int p,int u){
int i, j, aux, pivot;
pivot=v[u];
i=p;
j=u-1;

while(i<=j){
    while(i<=j && v[i]<pivot)
        i++;
     while(i<=j && v[j]>pivot)
        j--;

        if(i<=j){
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
             i++;
             j--;   }

}

// Plasãm pivotul la locul corect
    aux = v[i];
    v[i] = v[u];
    v[u] = aux;

if(p<i-1)
    qs(v,p,i-1);

if(i+1<u)
    qs(v,i+1,u);



}

void citire(int v[], int &n){

    int i;
    cout<<"Introduceti dimensiunea vectorului ";
    cin>>n;

    for(i=0;i<n;i++){
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }

}

void afisare(int v[], int n){
    int i;
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";

}


int main()
{ int v[50], n;
citire(v,n);
qs(v, 0, n-1);
afisare(v,n);

    return 0;
}
