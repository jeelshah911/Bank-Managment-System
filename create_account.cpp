#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>

using namespace std;
int main(){
    int accno;
    char name[25];
    char Fname[15];
    char cnic[25];
    char P_no[12];
    char email[20];
    float amount;

    srand(time(0));
    accno = rand()*rand() + rand()*rand();
    cout << "Enter your name:: ";
    cin >> name;

    cout << "Enter your Father's name:: ";
    cin >> Fname;

    cout << "Enter your CNIC:: ";
    cin >> cnic;

    cout << "Enter your Phone Number:: ";
    cin >> P_no;

    cout << "Enter your Email:: ";
    cin >> email;

    cout << "Enter the Amount:: ";
    cin >> amount;

    cout << accno << " This is your account number... \n";
    cout << "Please save it " << "\n";

    fstream file;

    file.open("data.txt", ios:: out|ios:: app);
    file << accno <<"\t" << name <<"\t" << P_no << "\t" << email << "\t" << amount << endl;
    file.close();
    return 0;
}
