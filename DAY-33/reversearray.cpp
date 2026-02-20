#include<iostream>
using namespace std;

void reverse(int arr[], int index, int n){
    
    // base condition
    if(index==n){
        return;
    }

    // aage bado
    reverse(arr,index+1,n);
    // phir print karo
    cout<<arr[index]<<endl;
}

int main(){

    int arr[10] = {2,3,4,1,5,9,7,8,10,21};

    reverse(arr,0,10);
    return 0;
}