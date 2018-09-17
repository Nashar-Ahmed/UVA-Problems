#include<bits/stdc++.h>
#define mx 2000010

using namespace std;

int a[mx];

int main()
{
    long long int n;
    cin>>n;

    while(n)
    {
        long long int i,j,x;

        for(i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);
        for(i=0; i<n; i++)
        {
            cout<<a[i];
            if(i<n-1)
                cout<<" ";
        }
        cout<<endl;

        cin>>n;
    }

    return 0;
}
