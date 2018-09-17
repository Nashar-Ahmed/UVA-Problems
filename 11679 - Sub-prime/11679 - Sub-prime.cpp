#include<bits/stdc++.h>
using namespace std;
int main()
{
    int B,N;
    while(cin>>B>>N)
    {
        if(B==0 && N==0)
            break;
        int i,flag=0,D,C,V;
        int account[21];

        for(i=1; i<=B; i++)
            cin>>account[i];
        for(i=0; i<N; i++)
        {
            cin>>D>>C>>V;
            account[D]=account[D]-V;
            account[C]=account[C]+V;
        }


        flag=1;
        for(i=1; i<=B; i++)
            if(account[i]<0)
            {
                flag=0;
                break;
            }


        if(flag==1)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
