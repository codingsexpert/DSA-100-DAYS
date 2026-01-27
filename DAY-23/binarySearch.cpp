bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
	int rowSize = matrix.size(), colSize = matrix[0].size(); 
    int start = 0, end = rowSize*colSize-1;

	while(start<=end){
        
		int mid = start+(end-start)/2;

		int rowIndex = mid/colSize;
		int colIndex = mid%colSize;

		if(matrix[rowIndex][colIndex]==target){
			return true;
		}
		else if(matrix[rowIndex][colIndex]<target){
            start = mid+1;
		}
		else{
			end = mid-1;
		}
	}

	return false;

}