#include<bits/stdc++.h>

using namespace std;

int main()
{

     long int a,b,c,d,l;
     while(cin>>a>>b>>c>>d>>l)
    {
       if(a==0&&b==0&&c==0&d==0)
            break;
        long int cnt=0,i,x;
        for(i=0; i<=l; i++){
          x=(a*i*i)+(b*i)+c;
          if(x%d==0)
            cnt++;

        }
        cout<<cnt<<"\n";
    }

    return 0;
}
