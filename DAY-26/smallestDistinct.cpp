int findSubString(string str) {
    // Your code here
    
	// first task find all the unique character in our string

	int uniqueChar = 0, n= str.size();
	bool freq[256] = {0};

	for(int i=0;i<n;i++){
		if(freq[str[i]]==0){
			freq[str[i]] = 1;
			uniqueChar++;
		}
	}


	// main problem: sliding window
	int start = 0, end = 0, answer = str.size(), currentUniqueChar = 0;
	int count[256] = {0};

	while(end<n){
        
		count[str[end]]++;

		if(count[str[end]]==1){
			currentUniqueChar++;
		}

		// currentUniqueChar is equal to uniqueChar

		while(currentUniqueChar==uniqueChar){
			answer = min(answer, end-start+1);
			count[str[start]]--;
			if(count[str[start]]==0){
				currentUniqueChar--;
			}
			start++;
		}

		end++;
	}

	return answer;
}