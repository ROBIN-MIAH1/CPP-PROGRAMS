#include<bits/stdc++.h>
using namespace std;

int main()
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
        cout << "PLEASE ENTER TWO INTEGER (M,N) TO DISPLAY THEIR ADDRESS WHICH IS HOLD BY POINTER VARIABLE : ";
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
        cout << "SORRY! INVALID CHOICE!\n" << endl;
    }
    cout << "\n\t\t   --------------------------------------------------------------" << endl;
    cout << "\t\t        THIS IS THE END OF MISC OPERARTION! THANK YOU." << endl;
    cout << "\t\t   --------------------------------------------------------------"   << endl;



    return 0;
}
