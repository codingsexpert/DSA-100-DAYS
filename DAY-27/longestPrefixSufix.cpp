int getLPSLength(string& s) {
    // Your code here

	int n = s.size();

	vector<int>LPS(n,0);

	int prefix =0 , suffix =1;

	while(suffix<n){
		// char match
		if(s[prefix]==s[suffix]){
			LPS[suffix] = prefix+1;
			prefix++, suffix++;
		}
		else{
			if(prefix==0){
				suffix++;
			}
			else{
				prefix = LPS[prefix-1];
			}
		}
	}

	return LPS[n-1];
}