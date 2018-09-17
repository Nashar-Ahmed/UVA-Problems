#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l;
    while(cin>>l && l!=0)
    {
        getchar();


        long long i,cnt=0,mn=2000003;
        int flag=0;
        string str;

        getline(cin,str);

        for(i=0; i<l; i++)
        {
            if(str[i]=='Z')
            {
                mn=0;
                cnt=0;
                break;
            }

            else if(str[i]=='D')
            {
                cnt=1;
                while((i+1)<l)
                {
                    if(str[i+1]=='D')
                    {
                        flag=0;
                        break;
                    }
                    else if(str[i+1]=='Z')
                    {
                        flag=0;
                        break;
                    }
                    else if(str[i+1]=='R')
                    {
                        flag=1;
                        break;
                    }

                    cnt++;
                    i++;
                }
            }

            else if(str[i]=='R')
            {
                cnt=1;
                while((i+1)<l)
                {
                    if(str[i+1]=='R')
                    {
                        flag=0;
                        break;
                    }
                    else if(str[i+1]=='Z')
                    {
                        flag=0;
                        break;
                    }
                    else if(str[i+1]=='D')
                    {
                        flag=1;
                        break;
                    }


                    cnt++;
                    i++;
                }
            }

            if(cnt<mn && flag==1)
                mn=cnt;

            flag=0;
        }

        cout<<"......................"<<mn<<endl;

    }
}
