#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    while(n)
    {
        int r,a,x,sum=0,p;
        while(n>=2)
        {
            p=n/3;
            sum=sum+p;
            r=n%3;
            n=p+r;
            if(n==2){
               sum++;
               break;
            }
        }
        cout<<sum<<endl;
        cin>>n;
    }
}
