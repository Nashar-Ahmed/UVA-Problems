#include<bits/stdc++.h>
using namespace std;

int lcm(int a,int b)
{
    if(a>b)
        swap(a,b);

    int mx;
    mx=b;

    while(1)
    {
        if(mx%a==0 && mx%b==0)
        {
            return mx;
        }
        mx=mx+b;
        cout<<"inside the loop\n";
    }
}


int main()
{
    int a,b,c;
    cin>>a>>b;
    c=lcm(a,b);
    cout<<c;
}
