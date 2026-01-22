// bool isPaintingPossible(int maxPaint,vector<int> &arr, int k){

// 	int count = 1, paint = arr[0];

// 	for(int i=1;i<n;i++){
// 		paint+=arr[i];
// 		if(paint>maxPaint){
// 			count++;
// 			paint = arr[i];
// 		}
// 	}

// 	return coun
// }


// int minTime(vector<int> &arr, int k) {
//     // Your code here

// 	int n = arr.size();

// 	int start = 0, end = 0 , mid, ans;

// 	for(int i=0;i<n;i++){
// 		start = max(start,arr[i]);
// 		end +=arr[i];
// 	}


// 	while(start<=end){
// 		mid = start+(end-start)/2;

// 		if(isPaintingPossible(mid,arr,k)){
// 			ans = mid;
// 			end = mid-1;
// 		}
// 		else{
// 			start = mid+1;
// 		}
// 	}


// 	return ans;
// }