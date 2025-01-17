#include <iostream>

using namespace std;

//Sortare prin interscimbare

void interschimbare(int v[],int n){
int i, j, aux;

for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
         if(v[i]>v[j]){

        aux=v[i];
        v[i]=v[j];
        v[j]=aux;}
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

    interschimbare(v,n);
    cout<<"Sirul sortat este: "<<endl;
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}


