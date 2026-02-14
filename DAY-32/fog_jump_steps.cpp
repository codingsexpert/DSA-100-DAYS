int countHops(int n) {
    // Your code here   
    
	if(n<=2){
		return n;
	}

	if(n==3){
		return 4;
	}


	return countHops(n-1)+countHops(n-2)+countHops(n-3);
}