#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;

    cout << "OK, ENTER TWO INTEGER(A,B) TO PERFORM LOGICAL OPERATION ON THEM: ";
    cin  >> A >> B;
    cout << "-------------------------------------------------------------------\n" << endl;


    cout << "LOGICAL OPERATION IN C++: " << endl;
    cout << "------------------------\n" << endl;

    cout << "1) LOGICAL AND (&&) OPERATION : " << endl;
    cout << "-----------------------------" << endl;
    cout << "1) LOGICAL AND(&&) :  (A <= B) && (A != B) :  ( " << A << " <= " << B << ") && (" << A << " != " << B << ") = " << ((A<=B) && (A!=B)) << endl;
    cout << "2) LOGICAL AND(&&) :  (A >= B) && (A != B) :  ( " << A << " >= " << B << ") && (" << A << " != " << B << ") = " << ((A>=B) && (A!=B)) << endl;
    cout << "3) LOGICAL AND(&&) :  (A == B) && (A != B) :  ( " << A << " == " << B << ") && (" << A << " != " << B << ") = " << ((A==B) && (A!=B)) << endl;

    cout << "\n2) LOGICAL OR  (||) OPERATION : " << endl;
    cout << "-----------------------------"   << endl;
    cout << "1) LOGICAL OR (||) :  (A <= B) || (A != B) :  ( " << A << " <= " << B << ") || (" << A << " != " << B << ") = " << ((A<=B) || (A!=B)) << endl;
    cout << "2) LOGICAL OR (||) :  (A >= B) || (A == B) :  ( " << A << " >= " << B << ") || (" << A << " == " << B << ") = " << ((A>=B) || (A==B)) << endl;
    cout << "3) LOGICAL OR (||) :  (A == B) || (A >= B) :  ( " << A << " == " << B << ") || (" << A << " >= " << B << ") = " << ((A==B) || (A>=B)) << endl;

    cout << "\n3) LOGICAL NOT (!)  OPERATION : " << endl;
    cout << "-----------------------------"   << endl;
    cout << "1) LOGICAL NOT (!) :  !(A <= B) && !(A != B) :  !( " << A << " <= " << B << ") && !(" << A << " != " << B << ") = " << (!(A<=B) && !(A!=B)) << endl;
    cout << "2) LOGICAL NOT (!) :  !(A >= B) ||  (A == B) :  !( " << A << " >= " << B << ") ||  (" << A << " == " << B << ") = " << (!(A>=B) || (A==B)) << endl;
    cout << "3) LOGICAL NOT (!) :  !(A == B) || !(A >= B) :  !( " << A << " == " << B << ") || !(" << A << " >= " << B << ") = " << (!(A==B) && !(A>=B)) << endl;


    cout << "\n\t\t   --------------------------------------------------------------" << endl;
    cout << "\t\t        THIS IS THE END OF LOGICAL OPERARTION! THANK YOU."           << endl;
    cout << "\t\t   --------------------------------------------------------------"   << endl;

    return 0;
}
