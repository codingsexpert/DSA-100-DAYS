#include<iostream>
using namespace std;

class Customer{
    public:
    int age, balance;
    string name;
};


int main(){
  
    Customer *C1 = new Customer();
    
    // (*C1).name = "Rohit";
    // (*C1).age = 10;
    // (*C1).balance = 2000;
    C1->name = "Rohit";
    C1->age = 10;
    C1->balance = 2000;

    cout<<C1->name<<" ";
    return 0;
} 