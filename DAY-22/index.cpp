#include<iostream>;
#include<vector>;
using namespace std;

int main(){
    
    int arr[4][3] = {
    {1,2,3},
   {4,5,6},
   {7,8,9},
   {10,11,12}};


    // wave form

    for(int j=0;j<3;j++){

        if(j%2==0){
            for(int i=0;i<4;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=3;i>-1;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }

    return 0;
}


// row major
// address of a number: (rowIndex*columnSize + ColumnIndex)*size
// reverse: index/columnSize , index%columnSize
//  column major: (columntIndex*rowSize+ columnIndex)*size
// Add 2 matrix
// Add 2 matrix with maximum sum
//  print digonal sum
//  wave form
// transpose