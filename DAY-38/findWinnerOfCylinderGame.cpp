class Solution {
public:
    
	int winner(int n, int k){

		if(n==1)
		return 0;

		return (winner(n-1,k)+k)%n;
	}


    int findTheWinner(int n, int k) {
        
		return 1+ winner(n,k);
    }
};