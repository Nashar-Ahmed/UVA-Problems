#include<iostream>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int arr[26]={0};

    char str[1000];

    int n,l,cnt,i,j;
    cin>>n;
    cin>>str;

    l=strlen(str);

    for(i=0;i<l;i++)
        arr[str[i]-(int)'a']++;

    int dis=0;
    for(i=0;i<26;i++)
    {
        if(arr[i]>0)
            dis++;

    }

    if(dis<n)
        cout<<"NO"<<endl;
    else
    {
        cnt=0;

        for(i=0;i<l;i++)
        {
            if(arr[str[i]-(int)'a']>0)
                arr[str[i]-(int)'a']==0;

                while(arr[str[i]-(int)'a']==0)
            {
                cout<<str[i];
                i++;
            }
            cout<<endl;

            cnt++;
            if(cnt==n-1)
                break;


        }
        for(int j=i;j<l;j++)
        {
            cout<<str[j];
        }
        cout<<endl;

    }
    return 0;

}
