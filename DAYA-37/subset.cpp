class Solution {
public:


   void findSubset(vector<int>& nums, int index, int n, vector<int>&temp, vector<vector<int>>&ans){

        if(index==n){
			ans.push_back(temp);
			return;
		}


    //    ki mein value ko inset kar raha hu aur left side jaa raha hu
          temp.push_back(nums[index]);
		  findSubset(nums,index+1,n,temp,ans);
		  temp.pop_back();



	//    ki mein value ko insert nahi karunga aur right side jaaunga
	       findSubset(nums,index+1,n,temp,ans);



		// // ek baar insert nahi kiya
        // findSubset(nums,index+1,n,temp,ans);

		// temp.push_back(nums[index]);
		// findSubset(nums,index+1,n,temp,ans);
        // temp.pop_back();
		// // ek baar insert kar diya

   }


    vector<vector<int>> subsets(vector<int>& nums) {
        // Your code here

		vector<vector<int>>ans;
		vector<int>temp;

		findSubset(nums,0,nums.size(),temp,ans);

		return ans;
    }
};