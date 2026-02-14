int fib(int n) {
    // Your code here
    
	// base condition
	if(n<=1)
	return n;

	int ans = fib(n-1)+fib(n-2);

	return ans;
    
}