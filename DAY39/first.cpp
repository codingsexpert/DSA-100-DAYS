// OOPs
#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age, rollNumber;

    // constructor
    Student(string n1, int ag1, int roll1){
       name = n1;
       age = ag1;
       rollNumber = roll1;
    }
};

class Customer{
    public:
    string name, bank;
    int age, balance, account_number;
};


int main(){
//    object: S1
    // Student S1,S2,S3;
    // S1.name = "Rohit";
    // S1.rollNumber = 70;
    // S1.age = 10;
    
    // S2.name = "Mohan";
    // S2.age = 5;
    // S2.rollNumber = 312;

    // S3 = S2;

    // cout<<S1.name<<" "<<S1.age<<" "<<S1.rollNumber<<endl;
    // cout<<S2.name<<" "<<S2.age<<" "<<S2.rollNumber<<endl;
    // cout<<S3.name<<" "<<S3.age<<" "<<S3.rollNumber<<endl;

    Student S1("Rohit",10,230);
    cout<<S1.name<<" "<<S1.age<<" "<<S1.rollNumber<<endl;

    Customer C1;
    C1.name = "Rishabh";
    C1.bank = "SBI";
    C1.age = 10;
    C1.account_number = 24124;
    C1.balance = 3123;
    
    cout<<C1.name<<" "<<C1.age<<" "<<C1.balance<<" "<<C1.bank<<" "<<C1.account_number<<endl;



    return 0;
}