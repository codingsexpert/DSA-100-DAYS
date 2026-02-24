class Solution {
public:

    void findSumSubset(vector<int>& arr,int index, int n, int sum, int &count, int target){
      
	//   base condition


	   if(target==sum){
		count++;
		return;
	   }
       
	   if(sum>target || index==n){
		return;
	   }

	   

	
	   



	  findSumSubset(arr,index+1,n,sum+arr[index],count,target);
	  findSumSubset(arr,index+1,n,sum,count,target);


	}

    int countSubsetsWithSum(vector<int>& arr, int target) {
        // Your code here

		int count = 0;

		findSumSubset(arr,0,arr.size(),0,count,target);

		return count;
    }
};