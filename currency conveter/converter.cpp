#include<cstdlib>
#include<conio.h>
#include<fstream>
#include <iomanip>
#include <iostream>
#include<string>

using namespace std;

class convert
{
    double inr;
    double rate;
    double usd;

    //declaring column 
    const int COLMFT1 = 35;
    const int COLMFT2 = 15;

    public :
        void input()
        {
            cout<< fixed <<setprecision(2);
            cin>>rate;
            cout<< setw(COLMFT1) <<left << "Enter a value (INR) ";
            cin>>inr;
            cout<<endl;
             usd = inr * rate ;
        }

        void output()
        {
            cout<< setw(COLMFT1) << left << "Current rate of usd ";
            cout<< setw(COLMFT1) << right << rate << endl;

            cout<< setw(COLMFT1) << left << "Coversion rate ";
            cout<< setw(COLMFT1) << right << rate <<endl;

            cout<< setw(COLMFT1) << left << "USD :";
            cout<< setw(COLMFT1) << right << usd <<endl;

        }

};

int main()
{
    convert c;
    cout << "“Welcome to C++ Currency Converter" << endl;
    cout << "\n-----------------------------------------" << endl ;
    c.input();
    c.output();
    cout << "\n--------------------------- " << endl;
    cout << "\nEnd of Rate Converter" << endl;
    return 0;

}