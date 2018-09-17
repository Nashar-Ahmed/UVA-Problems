#include<bits/stdc++.h>
using namespace std;



int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};


int M,D,Y;
int check_leap(int n)
{
    int flag = 0;

    if(n%4 == 0)
        flag = 1;
    if(n%4 == 0 && n%100 == 0)
        flag = 0;
    if(n%100 == 0 && n%400 == 0)
        flag = 1;

    return flag;
}

void seperate(string str)
{
    int x=0,y,z,i,j;
    string s1,s2,s3;

    for(i=0; i<2; i++)
        x = x*10 + (str[i] - 48);
    M = x;

    x = 0;
    for(i=2; i<4; i++)
        x = x*10 + (str[i] - 48);
    D = x;

    x = 0;
    for(i=4; i<8; i++)
        x = x*10 + (str[i] - 48);
    Y = x;
}



void update(int n)
{
    int i,j,x,y;

    D+=1;
    if(D > month[M-1])
    {
        D = 1;
        M++;
        if(M > 12)
        {
            M = 1;
            Y++;
            if(check_leap(Y) == 1)
                month[1] = 29;
            else
                month[1] = 28;
        }
    }
}






void print()
{
    cout<<" ";
    if(M==1)
        if(D>=21) cout<<"aquarius";
        else      cout<<"capricorn";

    else if(M == 2)
        if(D>= 20) cout<<"pisces";
        else       cout<<"aquarius";

    else if(M == 3)
        if(D>= 21) cout<<"aries";
        else       cout<<"pisces";

    else if(M == 4)
        if(D>= 21) cout<<"taurus";
        else       cout<<"aries";

    else if(M == 5)
        if(D>= 22) cout<<"gemini";
        else       cout<<"taurus";

    else if(M == 6)
        if(D>= 22) cout<<"cancer";
        else       cout<<"gemini";

    else if(M == 7)
        if(D>= 23) cout<<"leo";
        else       cout<<"cancer";

    else if(M == 8)
        if(D>= 22) cout<<"virgo";
        else       cout<<"leo";

    else if(M == 9)
        if(D>= 24) cout<<"libra";
        else       cout<<"virgo";

    else if(M == 10)
        if(D>= 24) cout<<"scorpio";
        else       cout<<"libra";

    else if(M == 11)
        if(D>= 23) cout<<"sagittarius";
        else       cout<<"scorpio";

    else if(M == 12)
        if(D>= 23) cout<<"capricorn";
        else       cout<<"sagittarius";

    cout<<endl;

}





int main()
{
    int test,C=0;

    scanf("%d",&test);
    while(test--)
    {
        C++;

        int x,y,ans,i,j,flag =0;
        string str;

        cin>>str;
        seperate(str);

        flag = check_leap(Y);
        if(flag == 1)
            month[1] = 29;
        else
            month[1] = 28;

        for(i=1; i<=280; i++)
            update(1);

        cout<<C<<" ";
        if(M<10)
            cout<<0<<M<<"/";
        else
            cout<<M<<"/";

        if(D<10)
            cout<<0<<D<<"/";
        else
            cout<<D<<"/";

        if(Y<10)
            cout<<000<<Y;
        else if(Y<100)
            cout<<00<<Y;
        else if(Y<1000)
            cout<<0<<Y;
        else
            cout<<Y;

        print();
    }
    return 0;
}
