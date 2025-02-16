#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;

    cout << "OK, ENTER TWO INTEGER (A,B) TO PERFORM ASSIGNMENT OPERATION ON THEM: ";
    cin  >> A >> B;
    cout << "------------------------------------------------------------------------\n" << endl;

    cout << "\nASSIGNMENT OPEREATION IN C++ : "   << endl;
    cout << "-------------------------------\n"   << endl;

    cout << "YOU ENTERD A = " << A << " AND B = " << B << endl;
    cout << "-----------------------------    \n" << endl;


    cout << "1) ASSIGNMENT               : " << "  A = " << A << " & B  = " << B << endl;
    cout << "3) SUBTRACT AND ASSIGNMENT  : (A+=B) || (A = A + B)  || A = " << A << " +  " << B  << " = " << (A+=B) << endl;
    cout << "3) SUBTRACT AND ASSIGNMENT  : (A-=B) || (A = A - B)  || A = " << A << " -  " << B  << " = " << (A-=B) << endl;
    cout << "4) MULTIPLAY AND ASSIGNMENT : (A*=B) || (A = A * B)  || A = " << A << " *  " << B  << " = " << (A*=B) << endl;
    cout << "5) DIVIDE AND ASSIGNMENT    : (A/=B) || (A = A / B)  || A = " << A << " / "  << B  << " = " << (A/=B) << endl;
    cout << "6) MODULUS AND ASSIGNMENT   : (A%=B) || (A = A % B)  || A = " << A << " %  " << B  << " = " << (A%=B) << endl;

    cout << "\n\t\t   --------------------------------------------------------------" << endl;
    cout << "\t\t        THIS IS THE END OF ASSIGNMENT OPERARTION! THANK YOU."        << endl;
    cout << "\t\t   --------------------------------------------------------------"   << endl;

    return 0;
}

