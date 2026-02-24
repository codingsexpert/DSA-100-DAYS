void changeCoin(vector<int>& coins, int index, int n,int sum, int target, int &count){
     
    if(sum==target){
		count++;
		return;
	}


	if(sum>target||index==n){
		return;
	}



    // coin ko add kiya and dubara usko use kar sakta hu
	changeCoin(coins,index,n,sum+coins[index],target,count);

	// coint ko add nahi kiya, aage bad gaya
	changeCoin(coins,index+1,n,sum,target,count);

}



int countCoinCombinations(vector<int>& coins, int target) {
    
    int count = 0;

	changeCoin(coins,0,coins.size(),0,target,count);


	return count;

}