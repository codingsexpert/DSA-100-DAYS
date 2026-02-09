#include<iostream>
using namespace std;

int main(){

    int *p = new int[10];
    // array create kar sakte hai dynamically

    for(int i=0;i<10;i++){
       p[i] = i*5;
    }

    // output;

    for(int i=0;i<10;i++){
        cout<<p[i]<<endl;
    }

    // free the memory
    delete[] p;

    return 0;
}