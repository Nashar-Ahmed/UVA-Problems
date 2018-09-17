#include<bits/stdc++.h>
using namespace std;

struct array {
    int in;
    string num;
} a [10000];

bool cmp (array x, array y)
{
    if ( x.in < y.in ) return true;
    return false;
}

int main ()
{
    int testCase;
    scanf ("%d", &testCase);
    getchar();

    bool blank = false;

    while ( testCase-- ) {
        char input [100000];
        gets (input);
        gets (input);

        char *pch = strtok (input, " ");
        int index = 0;

        while ( pch != NULL ) {
            a [index].in = atoi (pch);
            pch = strtok (NULL, " ");
            index++;
        }

        gets (input);

        pch = strtok (input, " ");
        index = 0;

        while ( pch != NULL ) {
            a [index].num = pch;
            pch = strtok (NULL, " ");
            index++;
        }

        sort (a, a + index, cmp);

        if ( blank ) printf ("\n");
        blank = true;

        for ( int i = 0; i < index; i++ )
            cout << a [i].num << endl;
    }

    return 0;
}

