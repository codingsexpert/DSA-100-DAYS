vector<vector<int>> addTwoMatrix(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {

//   if sum is not possible
    
	if(mat1.size()!=mat2.size() || mat1[0].size()!=mat2[0].size()){
		vector<vector<int>>ans(1, vector<int>(1));
		ans[0][0] = -1;
		return ans;
	}

    int rowSize = mat1.size(), colSize = mat1[0].size();

	vector<vector<int>>ans(rowSize, vector<int>(colSize));

	for(int i=0;i<rowSize;i++){
		for(int j=0;j<colSize;j++){
			ans[i][j] = mat1[i][j]+mat2[i][j];
		}
	}

	return ans;


}