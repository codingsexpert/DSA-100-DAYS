class Solution {
  public:
    bool isRotated(string& word1, string& word2) {
        // code here

		bool clockwise = true;
        int n = word1.size();

		for(int i=0;i<n;i++){
			if(word1[i]!=word2[(i+2)%n]){
				clockwise = false;
				break;
			}
		}

		if(clockwise){
			return true;
		}


		// anticlockwise check karo

		bool anticlockwise = true;
        
		for(int i=0;i<n;i++){
			if(word2[i]!=word1[(i+2)%n]){
				anticlockwise = false;
				break;
			}
		}

		return anticlockwise;

    }
};