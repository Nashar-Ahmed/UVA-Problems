#include<bits/stdc++.h>
using namespace std;

int main()
{
    double ncow, ncar;
    int hint;

    while(scanf("%lf%lf%d",&ncow, &ncar, &hint) == 3)
    {
        int i,j;
        double total_p, temp_p,total;

        total = ncar + ncow;
        total_p = ncar / total;

        for(i=1; i<=hint; i++)
        {
            temp_p = total_p / (total-i-1.0);
            total_p += temp_p;
        }
        printf("%.5lf\n",total_p);
    }
}
