void findSubsetSum(vector<int>& arr, int index, int n, int sum,vector<int>&ans){
    
	// base condition
	if(index==n){
		ans.push_back(sum);
		return;
	}

    
	// ya toh number ko add kar do sum mein aur aage bad jaao
	findSubsetSum(arr,index+1,n,sum+arr[index],ans);
	// ya number ko add mat karo sum mein aage bad jaao
	findSubsetSum(arr,index+1,n,sum,ans);
}

vector<int> subsetSums(vector<int>& arr) {
    // Your code here
    
    vector<int>ans;
	findSubsetSum(arr,0,arr.size(),0,ans);

	return ans;
}