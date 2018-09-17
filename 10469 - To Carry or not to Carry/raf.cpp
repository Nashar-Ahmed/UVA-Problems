#include<bits/stdc++.h>
using namespace std;

int add(int a, int b){
        while (b != 0){
            int carry = (a & b) ;

            a = a ^ b;
            carry=0;
            b = carry << 1;
        }
        return a;
 }

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<add(a,b);
}
