#include <iostream>

using namespace std;

void ms(int v[], int p, int u){
int i, j, mijl, w[50], k=0;
if(p<u)
{
  mijl=(p+u)/2;
  ms(v,p,mijl);
  ms(v,mijl+1,u);
  i=p;
  j=mijl+1;
  while(i<=mijl&&j<=u){
    if(v[i]<v[j]){
        w[k]=v[i];
        i++;
        k++;
    }
    else{
        w[k]=v[j];
        j++;
        k++;
    }}
    while (i<=mijl){
        w[k]=v[i];
        i++;
        k++;
    }
      while (j<=u){
        w[k]=v[j];
        j++;
        k++;
    }


    for(i=p,k=0;i<=u;i++,k++)
        v[i]=w[k];

  }//END IF


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
ms(v, 0, n-1);
afisare(v,n);

    return 0;
}



