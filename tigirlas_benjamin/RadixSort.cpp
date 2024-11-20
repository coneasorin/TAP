#include <iostream>
using namespace std;
int main()
{
    int i,j,n,min_index;
    int a[20];
    cout<<"Introduceti nr de cifre in lista: ";
    cin>>n;
    for (i=0;i<=n;i++){
        cin>>a[i];
    }
    for(i=0;i<=n-1;++i){
        min_index=i;
        for(j=i+1;j<=n;++j){
            if(a[j]<a[i])
                min_index=j;
        }
        swap(a[i],a[min_index]);
    }
    
    cout<<"a[i]= "<<a[i];
}