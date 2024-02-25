#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>

using namespace std;
class customer // cutomer class
{
private:
public:
    string customername;
    string carmodel;
    string carnumber;
    char data;
};

class rent : public customer
{
public:
    int days = 0, rentalfee = 0;
    void data()
    {
        // int login();
        // login();
        cout << "\t\t\t\tPlease Enter your name: ";
        cin >> customername;
        cout << endl;
        do
        {
            cout << "\t\t\t\tPlease Select a Car: " << endl;
            cout << "\t\t\t\tEnter 'A' for Tesla 20011." << endl;
            cout << "\t\t\t\tEnter 'B' for Hyundai 2015." << endl;
            cout << "\t\t\t\tEnter 'C' for Ford Mustangz 2017." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above option: ";
            cin >> carmodel;
            cout << "--------------------------------------" << endl;
            if (carmodel == "A" || carmodel == "a")
            {
                system("CLS");

                cout << "You have Choosed Tesla model 2011" << endl;
                ifstream inA("A.txt"); // displaying details of model A
                char str[200];
                while (inA)
                {
                    inA.getline(str, 200);
                    if (inA)
                        cout << str << endl;
                }
                sleep(2);
            }
            if (carmodel == "B" || carmodel == "b")
            {
                system("CLS");

                cout << "You have Choosed Hyundai 2015." << endl;
                ifstream inB("B.txt"); // displaying details of model B
                char str[200];
                while (inB)
                {
                    inB.getline(str, 200);
                    if (inB)
                        cout << str << endl;
                }
                sleep(2);
            }
            if (carmodel == "C" || carmodel == "c")
            {
                system("CLS");

                cout << "You have Choosed Ford 2017." << endl;
                ifstream inC("C.txt"); // displaying details of model C
                char str[200];
                while (inC)
                {
                    inC.getline(str, 200);
                    if (inC)
                        cout << str << endl;
                }
                sleep(2);
            }
            if (carmodel != "A" && carmodel != "a" && carmodel != "B" && carmodel != "b" && carmodel != "C" && carmodel != "c")
            {
                cout << "invalid Car Model. Please try again" << endl;
            }
        } while (carmodel != "A" && carmodel != "a" && carmodel != "B" && carmodel != "b" && carmodel != "C" && carmodel != "c");
        cout << "------------------------------------------------" << endl;
        cout << "Please provide following information." << endl;
        cout << "P1ease select a Car No.  :  ";
        cin >> carnumber;
        cout << "Number of days you wish to rent the car :  ";
        cin >> days;
        cout << endl;
    }
    void calculate()
    {
        sleep(1);
        system("CLS");
        cout << "calculating rent. Please wait........" << endl;
        sleep(2);
        if (carmodel == "A" || carmodel == "a")
        {
            rentalfee = days * 56;
        }
        if (carmodel == "B" || carmodel == "b")
        {
            rentalfee = days * 60;
        }
        if (carmodel == "C" || carmodel == "c")
        {
            rentalfee = days * 75;
        }
    }
    void showrent()
    {
        cout << "\n\t\t                                    Car Rental  -  Customer Invoice                    " << endl;
        cout << "\t\t\t        ///////////////////////////////////////////////////////////" << endl;
        cout << "\t\t\t          |  Invoice No.  :"
             << "-----------------------|" << setw(10) << "#Cnb81353"
             << "  |" << endl;
        cout << "\t\t\t          |  Customer Name :"
             << "----------------------|" << setw(10) << customername << "  |" << endl;
        cout << "\t\t\t          |  Car Model :"
             << "--------------------------|" << setw(10) << carmodel << "  |" << endl;
        cout << "\t\t\t          |  Car No. :"
             << "----------------------------|" << setw(10) << carnumber << "  | " << endl;
        cout << "\t\t\t          |  Number of days :"
             << "---------------------|" << setw(10) << days << "  |" << endl;
        cout << "\t\t\t          |  Your Rental Amount is :"
             << "--------------|" << setw(10) << rentalfee << "  |" << endl;
        cout << "\t\t\t          |  Caution Money :"
             << "----------------------|" << setw(10) << "0"
             << "  |" << endl;
        cout << "\t\t\t          |  Advance :"
             << "----------------------------|" << setw(10) << "0"
             << "  |" << endl;
        cout << "\t\t\t            ========================================================" << endl;
        cout << "\n";
        cout << "\t\t                  |  Total Rental Amount is :"
             << "-------------|" << setw(10) << rentalfee << " |" << endl;
        cout << "\t\t             #This is a computer generated invoice and it does not" << endl;
        cout << "\t\t               require an autorised signature #" << endl;
        cout << " " << endl;
        cout << "\t\t             //////////////////////////////////////////////////////////" << endl;
        cout << "\t\t             You are advised to pay up the amount before due date." << endl;
        cout << "\t\t             Otherwise penalty fee will be applied" << endl;
        cout << "\t\t             //////////////////////////////////////////////////////////" << endl;
        system("PAUSE");
        system("CLS");
        ifstream inf("thanks.txt");
        char str[300];
        while (inf)
        { 
            inf.getline(str, 300);
            if (inf)
                cout << str << endl;
        }
        inf.close();
    }
};

int main()
{
    rent rented;
    rented.data();
    rented.calculate();
    rented.showrent();
    return 1;
}
