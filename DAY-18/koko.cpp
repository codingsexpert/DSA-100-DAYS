// bool isEatingBananaPossible(int maxSpeed, vector<int>& piles, int h){

// 	int totalTime = 0, n = piles.size();

// 	for(int i=0;i<n;i++){
// 		totalTime+=piles[i]/maxSpeed;
// 		if(piles[i]%maxSpeed){
// 			totalTime++;
// 		}
// 	}

// 	return totalTime<=h;
// }

// int minEatingSpeed(vector<int>& piles, int h) {
//     // Your code here

// 	int start = 1, end = 0, n = piles.size(), ans;

// 	for(int i=0;i<n;i++){
// 		end+=piles[i];
// 	}


// 	while(start<=end){
// 		int mid = start+(end-start)/2;

// 		if(isEatingBananaPossible(mid,piles,h)){
// 			ans = mid;
// 			end = mid-1;
// 		}
// 		else{
// 			start = mid+1;
// 		}
// 	}

// 	return ans;
// }