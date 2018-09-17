#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    while(n)
    {
        long long int i,j,p,sum=0;
        while(1)
        {
            while(n>0)
            {
                p=n%10;
                sum=sum+p;
                n=n/10;
            }
            if(sum>9){
                n=sum;
                sum=0;
            }
            else
                break;
        }
        cout<<sum<<endl;
        cin>>n;
    }
}
