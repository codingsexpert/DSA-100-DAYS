
class Solution {
public:

    void permutation(vector<int>& nums, int index, int n, vector<vector<int>>&ans){
       
	//    base condition

	    if(index==n-1){
			ans.push_back(nums);
			return;
		}



		// index to n-1, sabke sab ek ek karke index ke sath swap honge

		for(int i=index;i<n;i++){
			swap(nums[i],nums[index]);
			permutation(nums,index+1,n,ans);
			swap(nums[i],nums[index]);
		}
	}

    vector<vector<int>> permute(vector<int>& nums) {
        // Code here

		vector<vector<int>>ans;

		permutation(nums,0,nums.size(),ans);

		return ans;
    }
};