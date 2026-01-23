// bool find4Numbers(vector<int>& A, int X) {
    
// 	// sort
// 	sort(A.begin(),A.end());
// 	int n = A.size();

// 	for(int i=0;i<n-3;i++){
// 		for(int j=i+1;j<n-2;j++){
// 			int start = j+1, end = n-1, newTarget= X-A[i]-A[j];

// 			while(start<end){
// 				if(A[start]+A[end]==newTarget){
// 					return true;
// 				}
// 				else if(A[start]+A[end]<newTarget){
// 					start++;
// 				}
// 				else{
// 					end--;
// 				}
// 			}
// 		}
// 	}

// 	return false;
// }