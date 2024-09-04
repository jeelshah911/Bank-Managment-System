#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main(){
    int accno;
    char name[25];
    char Fname[15];
    char cnic[25];
    char P_no[12];
    char email[20];
    float amount;
    int search;
    int NewAmount;

    cout << "Enter your Account Number :: ";
    cin >> search;

    cout << "Enter the amount to deposit:: ";
    cin >> NewAmount;

    fstream file, file1;
    file.open("data.txt", ios::in);
    file1.open("data1.txt", ios:: out|ios:: app);

    file >> accno >> name >> P_no >>email >> amount ;

    while (!file.eof()){
        if(accno == search){
            cout <<"\n current amount:: " << amount;
            amount = amount + NewAmount;
            cout << "\n updated amount:: " << amount;
            file1 << accno <<"\t" << name <<"\t" << P_no << "\t" << email << "\t" << amount << endl;
        }else{
            file1 << accno <<"\t" << name <<"\t" << P_no << "\t" << email << "\t" << amount << endl;
        }
    file >> accno >> name >> P_no >>email >> amount ;
    }
    file.close();
    file1.close();
    remove("data.txt");
    rename("data1.txt", "data.txt");

    return 0;
}
