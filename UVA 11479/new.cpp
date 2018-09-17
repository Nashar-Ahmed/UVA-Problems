#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    cin>>t;

    while(t--)
    {
        c++;
        long int a,b,c;
        cin>>a>>b>>c;

        cout<<"Case "<<c<<": ";
        if(a+b>c && b+c>a && a+c>b)
        {
            if(a==b && b==c && c==a)
                cout<<"Equilateral\n";
            else if(a==b || b==c || c==a)
                cout<<"Isosceles\n";
            else
                cout<<"Scalene\n";
        }
        else
            cout<<"Invalid\n";
    }
}
