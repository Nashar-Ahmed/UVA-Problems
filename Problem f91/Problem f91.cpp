#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;
    cin>>a;
    while(a)
    {
        if(a<=100)
            cout<<"f91("<<a<<") = 91"<<endl;
        else if(a>=101)
            cout<<"f91("<<a<<") = "<<a-10<<endl;

        cin>>a;
    }

    return 0;
}
