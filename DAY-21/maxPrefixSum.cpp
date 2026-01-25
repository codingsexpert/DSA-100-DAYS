int maxSubarraySum(vector<int> &arr, int left,int right) {

	int maxSum = arr[left], prefixSum = arr[left];
    
	for(int i=left+1;i<=right;i++){
		prefixSum +=arr[i];
		maxSum = max(prefixSum,maxSum);
	}

	return maxSum;
}



vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex, vector<int>& rightIndex) {
    // Your code here
    
	int querySize = leftIndex.size();
	vector<int>ans;

	for(int i=0;i<querySize;i++){
      
	  int prefixSum = maxSubarraySum(arr,leftIndex[i],rightIndex[i]);
	  ans.push_back(prefixSum);
	}

	return ans;
	
}