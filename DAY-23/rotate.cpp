void rotate(vector<vector<int>>& mat) {
    	 
	// Transpose

	int rowSize = mat.size(), colSize = mat[0].size();

	for(int i=0;i<rowSize-1;i++){
		for(int j=i+1;j<colSize;j++){
			swap(mat[i][j],mat[j][i]);
		}
	}



	// verticaly flip kar do: 180 degree rotate kar do

	int colStart = 0, colEnd = mat[0].size()-1;

	while(colStart<colEnd){
		for(int i=0;i<rowSize;i++){
			swap(mat[i][colStart],mat[i][colEnd]);
		}

		colStart++, colEnd--;
	}


}