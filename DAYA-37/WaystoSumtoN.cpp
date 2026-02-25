void findTotal(int arr[], int n, int sum, int target, long long &count){
    
	// base condition
	if(sum==target){
		count++;
		return;
	}

	if(sum>target){
		return;
	}




	for(int i=0;i<n;i++){
		findTotal(arr,n,sum+arr[i],target,count);
	}


}



long long countWays(int arr[], int n, int target) {
    
     long long count = 0;

	 findTotal(arr,n,0,target,count);

	 return count;
}