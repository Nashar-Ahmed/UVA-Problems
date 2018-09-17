#include<bits/stdc++.h>
using namespace std;
clock_t start,ed;

int ary[100000000];
int main()
{
    int i,j,c=0,k;
    vector<int> a;
    double time;
    start=clock();
    for(i=1000; i<9999; i++)
        for(j=i; j<9999; j++){
            if(i%10==0 && j%10==0)
                continue;
            ary[j]=(i*j);
            c++;


        }




    ed=clock();
    time=((double)(ed-start)/CLOCKS_PER_SEC);
    cout<<c<<endl;
    cout<<"Time="<<time;

}
