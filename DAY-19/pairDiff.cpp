// int pairWithGivenDifference(vector<int>& arr, int diff) {
//     // Your code here
    
// 	sort(arr.begin(),arr.end());

// 	int start = 0, end = 0, n= arr.size();

// 	while(start<=end&&end<n){

// 		if(arr[end]-arr[start]==diff){
// 			return 1;
// 		}
// 		else if(arr[end]-arr[start]<diff){
// 			end++;
// 		}
// 		else{
// 			start++;
// 		}
// 	}

// 	return 0;
// }