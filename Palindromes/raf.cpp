#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x='Z';
    cout<<x;
    string str1,str2;
    int a[200]={0};

    a[69]=51;
    a[51]=69;
    a[74]=76;
    a[76]=74;
    a[83]=50;
    a[50]=83;
    a[90]=53;
    a[53]=90;

    while(cin>>str1)
    {
        int i,j,l,x,cnt=0;
        str2=str1;

        l=str1.size();
        j=l-1;
        for(i=0; i<l; i++)
        {
            if(str1[i]==str2[j])
            {
                j--;
                continue;
            }
            else
            {
                if(str1[i]==a[str2[j]])
                {
                    j--;
                    continue;
                }
                else
                {
                    cnt=1;
                    break;
                }
            }


        }

        cout<<cnt;
    }
}
