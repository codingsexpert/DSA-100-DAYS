#include<iostream>
using namespace std;

void reverse(int arr[],int index){
   
    // base condition
    if(index==-1)
    return;

    // print karo
    cout<<arr[index]<<endl;
    // index ko decrease karo
    reverse(arr,index-1);
}


int main(){

    int arr[10] = {2,3,4,1,5,9,7,8,10,21};

    reverse(arr,9);
    return 0;
}