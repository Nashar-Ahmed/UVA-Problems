#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    long long sum=0;

    cin>>tst;
    while(tst--)
    {
        long long  k;
        string str;

        cin>>str;
        if(str=="donate")
        {
            cin>>k;
            sum=sum+k;
        }
        else if(str=="report")
            cout<<sum<<endl;

    }
    return 0;
}
