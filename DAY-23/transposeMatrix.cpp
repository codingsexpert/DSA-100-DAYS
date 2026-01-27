vector<vector<int>> transpose(vector<vector<int>>& mat) {
    
	int rowSize = mat.size(), colSize = mat[0].size();

	for(int i=0;i<rowSize-1;i++){
		for(int j=i+1;j<colSize;j++){
			swap(mat[i][j],mat[j][i]);
		}
	}

	return mat;
}