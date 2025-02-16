#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;

    cout << "PLEASE ENTER TWO INTEGER NUMBER (A,B) TO PERFORM ARITHMETIC OPERATION ON THEM : ";
    cin  >> A >> B;

    cout << "\nARITHMETIC OPERATION IN C++ :" << endl;
    cout << "---------------------------\n" << endl;
    cout << "OK, YOU ENTERD A = " << A << " AND B = " << B << endl;
    cout << "------------------------------------" << endl;
    cout << "1) SUMMATION         : " << A << " + " << B << " = " << A + B << endl;
    cout << "2) SUBTRACTION       : " << A << " - " << B << " = " << A - B << endl;
    cout << "3) MULTLIPLICATION   : " << A << " * " << B << " = " << A * B << endl;
    cout << "4) DIVISION          : " << A << " / " << B << " = " << A / B << endl;
    cout << "5) MODULUS           : " << A << " % " << B << " = " << A % B << endl;


    cout << "\n";

    cout << "6) PRE-INCREMENT     : ++A  = " << ++A << endl;
    cout << "7) POST-INCREMENT    : A++  = " << A++ << endl;
    cout << "8) MEMORY VALUE      : A    = " <<  A  << endl;

    cout << "\n";

    cout << "9)  PRE-DECREMENT    : --B  = " << --B << endl;
    cout << "10) POST-DECREMENT   : B--  = " << B-- << endl;
    cout << "11) MEMORY VALUE     : B    = " << B   << endl;

    cout << "\n\t\t   --------------------------------------------------------------" << endl;
    cout << "\t\t        THIS IS THE END OF ARITHMETIC OPERARTION! THANK YOU."        << endl;
    cout << "\t\t   --------------------------------------------------------------"   << endl;


    return 0;
}

