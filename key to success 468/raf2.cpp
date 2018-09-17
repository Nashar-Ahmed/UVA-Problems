#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();

    while(t--)
    {
        char s1[1100],s2[1100];
        int a1[130]={0},a2[130]={0};
        vector<int> array1,array2;
        int i,j,k,l1,l2,n,cnt=0,x,y;

        cin>>s1;
        cin>>s2;
        l1=strlen(s1);
        l2=strlen(s2);

        for(i=0; i<l1; i++)
        {
            if((s1[i]>64 && s1[i]<91) || (s1[i]>96 && s1[i]<123))
                a1[s1[i]]++;
        }
        for(i=0; i<l2; i++)
        {
            if((s2[i]>64 && s2[i]<91) || (s2[i]>96 && s2[i]<123))
                a2[s2[i]]++;
        }

        for(i=0; i<130; i++)
        {
            if(a1[i]!=0)
            {
                n=a1[i];
                array1[n]=i;
            }
        }
        for(i=0; i<130; i++)
        {
            if(a2[i]!=0)
            {
                n=a2[i];
                array2[n]=i;
            }
        }

        /*x=array2.size();
        y=array1.size();
        for(i=y; i>0; i--)
        {
            if(array1[i]!=0)
            {
                for(j=x; j>0; j--)
                {
                    if(array2[j]!=0)
                    {
                        for(k=0; k<l2; k++)
                        if(s2[k]==array2[j]){
                                s2[k]=array1[i];
                        }

                        x=j-1;
                        break;
                    }
                }
            }
        }

        cout<<s2<<endl;

        if(t!=0)
            cout<<endl;*/

    }

    return 0;
}

