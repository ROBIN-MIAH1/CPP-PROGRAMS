/*
PROBLEM-10:
WRITE A C++ PROGRAM THAT TOOK INPUT AN INTEGER FROM USER AND CHECK EITHER
IT'S POSITIVE, NEGATIVE OR ZERO(0).
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i = 1;

    while(1)
    {
        cout << i << ") PLEASE ENTER AN NUMBER TO CHECK EITHER IT'S POSITIVE, NEGATIVE OR ZERO: ";
        cin  >> n;
        cout << "-------------------------------------------------------------------------------\n";

        if(n == 0)
        {
            cout << "THE NUMBER IS " << n << endl;
        }
        else if(n > 0)
        {
            cout << n << " IS A POSITIVE NUMBER.\n";
        }
        else if(n < 0)
        {
            cout << n << " IS A NEGATIVE NUMBER.\n";
        }
        i += 1;
        cout << "------------------------------------------\n";
    }

    return 0;
}
