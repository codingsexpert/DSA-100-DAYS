int maxDiff(vector<int> &arr) {
    // Your code here

	int n = arr.size();
	vector<int>SuffixMax(n,0);

	// arr =      [2, 3, 10, 6, 4, 8, 1]
	// SuffixMax = [10, 10, 10,  8, 8, 8, 1]

	SuffixMax[n-1] = arr[n-1];

	for(int i=n-2;i>-1;i--){
		SuffixMax[i] = max(arr[i],SuffixMax[i+1]);
	}


	// solution find karo

	int ans = -1;

	// arr =      [2, 3, 10, 6, 4, 8, 1]
	// SuffixMax = [10, 10, 10, 8, 8, 8, 1]
	// ans = 8

	for(int i=0;i<n-1;i++){
		if(SuffixMax[i+1]>arr[i]){
			ans = max(ans,SuffixMax[i+1]-arr[i]);
		}
	}

	return ans;
    
}