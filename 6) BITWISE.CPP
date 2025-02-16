#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;

    cout << "OK, ENTER TWO INTEGER(A,B) TO PERFORM RELATIONAL OPERATION ON THEM: ";
    cin  >> A >> B;
    cout << "------------------------------------------------------------------------\n" << endl;

    cout << "\BITWISE OPEREATION IN C++ : "  << endl;
    cout << "-----------------------------\n"    << endl;

    cout << "YOU ENTERD A = " << A << " AND B = "<< B << endl;
    cout << "----------------------------\n";


    cout << "1) BITWISE AND  (&)         : ( A & B ) : (" << A << " & " << B << ") = " << (A&B) << endl;
    cout << "2) BITWISE OR   (|)         : ( A | B ) : (" << A << " | " << B << ") = " << (A|B) << endl;
    cout << "3) BITWISE EX-OR (^)        : ( A ^ B ) : (" << A << " ^ " << B << ") = " << (A^B) << endl << endl;

    cout << "4) 1S COMPLEMENT (~)        :    (~A)   : (~"<< A << ")"   << "    = "    << (~A) << endl;
    cout << "5) BITWISE LEFT-SHIFT  (<<) : ( A << 1) : (" << A << " & " << B << ") = " << (A << 1) << endl;
    cout << "6) BITWISE RIGHT-SHIFT (>>) : ( B >> 1) : (" << A << " & " << B << ") = " << (B << 1) << endl;

    cout << "\n\t\t   --------------------------------------------------------------" << endl;
    cout << "\t\t        THIS IS THE END OF BITWISE OPERARTION! THANK YOU."        << endl;
    cout << "\t\t   --------------------------------------------------------------"   << endl;

    return 0;
}


