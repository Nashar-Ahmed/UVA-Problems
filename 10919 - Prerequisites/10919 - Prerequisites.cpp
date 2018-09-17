#include<bits/stdc++.h>
using namespace std;

int dission(int course[],int k)
{
    int i,j;
    int c,mn,cnt=0;
    int tcourse[100];

    cin>>c>>mn;
    for(i=0; i<c; i++)
        cin>>tcourse[i];

    for(i=0; i<k; i++)
        for(j=0; j<c; j++)
        {
            if(course[i]==tcourse[j])
            {
                cnt++;
                break;
            }
        }


    if(cnt>=mn)
        return 0;
    else
        return 1;
}


int main()
{
    int k,m;
    while(cin>>k)
    {
        if(k==0)
            break;
        cin>>m;

        int i,j,x,flag=0;
        int course[100];

        for(i=0; i<k; i++)
            cin>>course[i];

        for(i=0; i<m; i++)
        {
            x=dission(course,k);
            if(x==1)
               flag=1;
        }

        if(flag==0)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}
