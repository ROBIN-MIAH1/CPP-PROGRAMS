#include<bits/stdc++.h>
using namespace std;

void ProgramMenu();
void Arithmetic();
void Assignment();
void Relational();
void Logical();
void Bitwise();
void Misc();

int main()
{
    ProgramMenu();
    int choice;

    while(1)
    {

    cout << "---------------------------------------------------------------------------------\n";
    cout << "PLEASE ENTER YOU CHOICE FROM MENU : ";
    cin  >> choice;
    cout << "--------------------------------------\n";

    if(choice >= 0 && choice <= 6)
    {
               switch(choice)
        {
        case 1:
            Arithmetic();
            break;
        case 2:
            Assignment();
            break;
        case 3:
            Relational();
            break;
        case 4:
            Logical();
            break;
        case 5:
            Bitwise();
            break;
        case 6:
            Misc();
            break;
        case 0:
            exit(0);
        default:
            cout << "INVALID CHOICE PLEASE TRY AGAIN.\n";
            break;
        }
    }
    else
    {
        cout << "INVALID CHOICE! PLEASE TRY AGAIN.";
        cout << "---------------------------------\n";
    }


    }
    return 0;

}
void ProgramMenu()
{
    cout << "--------------------------------------\n";
    cout << "1) ARITHMETIC OPERATION IN C++.\n";
    cout << "2) ASSIGNMENT OPERATION IN C++.\n";
    cout << "3) RELATIONAL OPERATION IN C++.\n";
    cout << "4) LOGICAL    OPERATION IN C++.\n";
    cout << "5) BITWISE    OPERATION IN C++.\n";
    cout << "6) MISC       OPERATION IN C++.\n";
    cout << "--------------------------------------\n";
}
void Arithmetic()
{
    int A, B;

    cout << "PLEASE ENTER TWO INTEGER NUMBER (A,B) TO PERFORM ARITHMETIC OPERATION ON THEM : ";
    cin  >> A >> B;
    cout << "-----------------------------------------------------------------------------------------" << endl;

    cout << "\n1) ARITHMETIC OPERATION IN C++ :" << endl;
    cout << "--------------------------------\n" << endl;
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

}
void Assignment()
{
    int A, B;

    cout << "OK, ENTER TWO INTEGER (A,B) TO PERFORM ASSIGNMENT OPERATION ON THEM: ";
    cin  >> A >> B;
    cout << "------------------------------------------------------------------------\n" << endl;

    cout << "\n2) ASSIGNMENT OPEREATION IN C++ : "   << endl;
    cout << "----------------------------------\n"   << endl;

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
}
void Relational()
{
    int A, B;

    cout << "OK, ENTER TWO INTEGER(A,B) TO PERFORM RELATIONAL OPERATION ON THEM: ";
    cin  >> A >> B;
    cout << "------------------------------------------------------------------------\n" << endl;

    cout << "\n3) RELATIONAL OPEREATION IN C++ : "  << endl;
    cout << "----------------------------------\n"  << endl;

    cout << "YOU ENTERD A = " << A << " & B = "  << B << endl;
    cout << "-----------------------------\n  "  << endl;


    cout << "1) EQUAL TO     : ( A == B) : " << A << " == " << B << " = " << ( A == B) << endl;
    cout << "2) NOT EQUAL TO : ( A != B) : " << A << " != " << B << " = " << ( A != B) << endl;
    cout << "3) GREATER THAN : ( A >  B) : " << A << "  > " << B << " = " << ( A  > B) << endl;
    cout << "4) LESS THAN    : ( A <  B) : " << A << "  < " << B << " = " << ( A  < B) << endl << endl;
    cout << "5) GREATER THAN OR EQUAL TO : ( A >= B) : " << A << " >= " << B << " = " << ( A >= B) << endl;
    cout << "6) LESS THAN OR EQUAL TO    : ( A <= B) : " << A << " <= " << B << " = " << ( A <= B) << endl;




    cout << "\n\t\t   --------------------------------------------------------------" << endl;
    cout << "\t\t        THIS IS THE END OF RELATIONAL OPERARTION! THANK YOU."        << endl;
    cout << "\t\t   --------------------------------------------------------------"   << endl;

}
void Logical()
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

}
void Bitwise()
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
    cout << "\t\t        THIS IS THE END OF BITWISE OPERARTION! THANK YOU."           << endl;
    cout << "\t\t   --------------------------------------------------------------"   << endl;
}
void Misc()
{
    int A;
    int M, N;
    int *PM, *PN;

    cout << "1) DISPALY MEMORY SIZE OF VARIABLES USING SIZEOF()." << endl;
    cout << "2) DISPALY ADDRESS OF VARIABLES USING ADDRESS OF(&) OPERATOR." << endl;
    cout << "3) HOW POINTER(*) OPERATOR HOLDS ADDRESS OF ANOTHER VARIABLE." << endl;
    cout << "4) FIND OUT LARGEST NUMBER USING TERNARY OPERATOR." << endl;
    cout << "0) EXIT OUT FROM MISC OPERATOR." << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "OK, ENTER YOUR CHOICE FROM MENU TO PERFORM ANY MISC OPERATION: ";
    cin  >> A;
    cout << "------------------------------------------------------------------------\n" << endl;

    cout << "\nMISC OPEREATION IN C++ : "  << endl;
    cout << "---------------------------\n"   << endl;

    cout << "YOU ENTERD A = " << A << endl;
    cout << "----------------- " << endl;

    if(A >= 1 && A <= 4)
    {
        if(A == 1)
        {
            cout << "1) MEMORY SIZE OF DIFFRENT VARIABLES:\n";
            cout << "----------------------------------\n";
            cout << "1) INTEGER    : " << sizeof(int)   << " BYTES " << endl;
            cout << "2) CHARACTR   : " << sizeof(char)  << " BYTES " << endl;
            cout << "3) FLOAT      : " << sizeof(float) << " BYTES " << endl;
            cout << "4) DOUBLE     : " << sizeof(double)<< " BYTES " << endl;
            cout << "5) BOOL       : " << sizeof(bool)  << " BYTES " << endl;
        }
        if(A == 2)
        {

            cout << "PLEASE ENTER TWO INTEGER(M,N) TO DISPLAY THEIR ADDRESS: ";
            cin  >> M >> N;
            cout << "------------------------------------------------------------\n";

            cout << "YOU ENTERED M = " << M << " AND N = " << N << endl;
            cout << "---------------------------------\n";

            cout << "ADDRESS OF M  =  " << &M << endl;
            cout << "ADDRESS OF N  =  " << &N << endl;

        }
        if(A == 3)
        {
            cout << "PLEASE ENTER TWO INTEGER (M,N) TO DISPLAY THEIR ADDRESS WHICH IS HOLD BY POINTER VARIABLE (PM AND PN) : ";
            cin  >> M >> N;
            cout << "------------------------------------------------------------\n";

            cout << "OK, YOU ENTERED M = " << M << " AND N = " << N << endl;
            cout << "---------------------------------\n\n";

            cout << "1) ADDRESS OF M  =  " << &M << endl;
            cout << "2) ADDRESS OF N  =  " << &N << endl;
            cout << "---------------------------------\n";
            PM = &M;
            PN = &N;

            cout << "3) VALUE OF PM   =  " << &M << endl;
            cout << "4) VALUE OF PN   =  " << &N << endl;
            cout << "---------------------------------\n";
        }
        if(A == 4)
        {
            cout << "PLEASE ENTER 3 DIFFRENT INTEGER (A,M,N) TO FIND LARGEST AND SMALLEST NUMBER AMONG THEM: ";
            cin  >> A >> M >> N;
            cout << "-----------------------------------------------------------------------------------------------\n";

            cout << "YOU ENTERED A = " << A << ", M = " << M << " AND N = " << N << endl;
            cout << "------------------------------------\n";

            int K = (A > M && A > N) ? A :
                    (M > N) ? M : N;
            cout << "1) LARGEST  INTEGER IS  = " << K << endl;

            int L = (A < M && A < N) ? A :
                    (M < N) ? M : N;
            cout << "2) SMALLEST INTEGER IS  = " << L << endl;

        }
    }
    else
    {
        cout << "INVALID CHOICE!\n" << endl;
    }

    cout << "\n\t\t   --------------------------------------------------------------" << endl;
    cout << "\t\t        SO, THIS IS THE END OF MISC OPERARTION! THANK YOU."              << endl;
    cout << "\t\t   --------------------------------------------------------------"   << endl;

}
