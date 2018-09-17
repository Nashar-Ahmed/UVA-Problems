#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst,c;
    cin>>tst;

    for(c=1; c<=tst; c++)
    {
        int N,a[20000];
        int mx=0;

        cin>>N;
        for(int i=0; i<N; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<N; i++)
            if(a[i]>mx)
               mx=a[i];

        cout<<"Case "<<c<<":"<<" "<<mx<<endl;
    }
}
