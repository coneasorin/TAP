#include <iostream>

using namespace std;

//Metoda bulelor

void bubbles(int v[], int n){
int i, k, aux;

k=0;
while(!k){
k=1;
for(i=0; i<n; i++){
    if(v[i-1]>v[i]){
            aux=v[i-1];
            v[i-1]=v[i];
            v[i]=aux;
            k=0;
    }

}
}
}

int main()
{
    int n, i, v[50];
    cout<<"Introduceti lungimea sirului: "<<endl;
    cin>>n;
    cout<<" Introduceti elementele sirului: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }

    bubbles(v,n);
    cout<<"Sirul sortat este: "<<endl;
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
