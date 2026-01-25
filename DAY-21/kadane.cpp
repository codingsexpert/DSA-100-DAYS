// int maxSubarraySum(vector<int> &arr) {
//     // Your code here
    

// 	int n = arr.size();
// 	int maxSum = INT_MIN, subSum = 0;

// 	for(int i=0;i<n;i++){
// 		// agar mujse pehle wale negative hue, mein nahi add hounga unke sath
//         if(subSum<0){
// 			subSum = arr[i];
// 		}
// 		else{
// 			subSum+=arr[i];
// 		}

// 		maxSum = max(maxSum,subSum);

// 		// Nahi toh mein us group ka part pan jaaunga
// 	}

// 	return maxSum;
// }