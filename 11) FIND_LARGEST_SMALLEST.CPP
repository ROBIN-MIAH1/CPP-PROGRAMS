/*
PROBLEM-11:
WRITE A C++ PROGRAM USING TERNARY OPERATOR WHICH TAKE'S 6 INTEGER NUMBER'S FROM USER
AND DISPLAY LARGEST AND SMALLEST NUMBER AMONG THEM.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    int Largest, Smallest;
    int i = 1;

    while(1)
    {
        cout << i << ") PLEASE ENTER 6 DIFFERENT INTEGER NUMBER TO DIPLAY LARGEST AND SMALLEST AMONG THEM: ";
        cin  >> a >> b >> c >> d >> e >> f;
        cout << "-------------------------------------------------------------------------------------------\n";

        Largest = (a > b && a > c && a > d && a > e && a > f) ? a :
                  (b > c && b > d && b > e && b > f) ? b :
                  (c > d && c > e && c > f) ? c :
                  (d > e && d > f) ? d :
                  (e > f) ? e : f;

        cout << "1) LARGEST   = " << Largest << endl;

        Smallest = (a < b && a < c && a < d && a < e && a < f) ? a :
                   (b < c && b < d && b < e && b < f) ? b :
                   (c < d && c < e && c < f) ? c :
                   (d < e && d < f) ? d :
                   (e < f) ? e : f;
        cout << "2) SMALLEST  = " << Smallest << endl;

        i += 1;
        cout << "--------------------------------------\n";


        int Check;
        cout << "DO YOU WANNA CHECK IT AGAIN? (ENTER 1 FOR YES AND 0 FOR NO): ";
        cin  >> Check;
        cout << "--------------------------------------------------------------\n";

        if(Check == 0)
        {
            break;
        }

    }

    return 0;
}
