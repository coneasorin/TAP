#include <iostream>
using namespace std;

int main()
{
    int v[100],n,i,ok=0;
    cin>>n;
    for(i=1;i<=n;++i)
    cin>>v[i];
    while(ok==0)
    {ok=1;
    for(i=1;i<=n-1;++i)
        if(v[i]>v[i+1])
        {
            v[0]=v[i];
            v[i]=v[i+1];
            v[i+1]=v[0];
            ok=0;
        }
}
for(i=1;i<=n;++i)
cout<<v[i]<<" ";
    return 0;
}