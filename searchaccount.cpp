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
    cout << "Enter your Account Number:: ";
    cin >> search;

    fstream file ;
    file.open("data.txt", ios::in);
    if(!file){
        cout<<"File opening error!";
    }
    file >> accno >> name >> P_no >>email >> amount ;
    while(!file.eof()){
        if(accno == search){
            cout<< accno << name << P_no << email << amount;
        }
    file >> accno >> name >> P_no >>email >> amount ;
    }
    file.close();
    return 0 ;








}
