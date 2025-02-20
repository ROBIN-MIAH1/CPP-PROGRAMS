/*
PROBLEM-09:
WRITE A C++ PROGRAM THAT TAKE'S INPUT AN INTEGER FROM USER AND CHECK EITHER
IT'S EVEN OR ODD.IF USER ENTER ZERO(0) THEN THE PROGRAM EXIT.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i = 1;

    while(1)
    {
        cout << i << ") PLEASE ENTER AN INTEGER NUMBER TO CHECK EITHER IT'S EVEN OR ODD (0 TO EXIT): ";
        cin  >> n;
        cout << "-------------------------------------------------------------------------------\n";

        if(n == 0)
        {
            break;
        }
        if(n % 2 == 0)
        {
            cout << n << " IS AN EVEN NUMBER.\n";
        }
        else
        {
            cout << n << " IS AN ODD NUMBER.\n";
        }
        i += 1;
        cout << "----------------------------------\n";
    }

    return 0;
}
