#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[10]={5,4,8,2,3,10,1,7,12};
    int i;
    sort(a,a+10);
    for(i=0;i<10;i++)
        cout<<a[i];

}
