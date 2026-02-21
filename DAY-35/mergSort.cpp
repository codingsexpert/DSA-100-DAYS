class Solution {
public:
   
   void Merge(vector<int>&arr, int start, int mid, int end){

	// create a temp array

	   vector<int>temp(end-start+1);
        int left = start, right = mid+1, index = 0;

		// left portion: start- mid
		//  right portion: mid+1 -- end;

		while(left<=mid&&right<=end){
			if(arr[left]<=arr[right]){
				temp[index++] = arr[left++];
			}
			else{
				temp[index++]= arr[right++];
			}
		}

		// left portion mein kuch bacha toh nahi hai
		while(left<=mid){
			temp[index++] = arr[left++];
		}
		// right portion mein kuch bach toh nahi haiu
		while(right<=end){
			temp[index++] = arr[right++];
		}


		// temp array ke andar data sorted form mein hai
		//  usko copy karo original array ke andar
        
		index = 0;
		for(int i=start;i<=end;i++){
          arr[i] = temp[index++];
		}

   }


   void MergeSort(vector<int>&arr,int start, int end){
     
	//  base condition
	 if(start==end)
	 return;
      

	  int mid = start +(end-start)/2;
	// int mid = end+ (start-end)/2;
      
	  MergeSort(arr,start,mid);
	  MergeSort(arr,mid+1,end);
	  Merge(arr,start,mid,end);
//    left part divide karo
//    right part divide karo
//    last mein join or merge kar do
 

   }


  void mergeSort(vector<int>& arr) {
    // Write your code here


	MergeSort(arr,0,arr.size()-1);
  }
};