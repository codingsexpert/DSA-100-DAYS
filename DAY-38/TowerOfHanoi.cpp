class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here

		if(n==1){
			return 1;
		}

       return towerOfHanoi(n-1,from, to,aux)+1+ towerOfHanoi(n-1,aux, from,to);

    }
};