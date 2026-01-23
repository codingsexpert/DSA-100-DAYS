// bool hasTripletSum(vector<int> &arr, int target) {
//     // Code Here
    
// 	sort(arr.begin(),arr.end());
	
// 	int n = arr.size();

// 	for(int i=0;i<n-2;i++){

// 		int start = i+1, end = n-1, newTarget = target-arr[i];

// 		while(start<end){

// 			if(arr[start]+arr[end]==newTarget){
// 				return true;
// 			}
// 			else if(arr[start]+arr[end]<newTarget){
// 				start++;
// 			}
// 			else{
// 				end--;
// 			}
// 		}
// 	}


// 	return 0;
	
// }