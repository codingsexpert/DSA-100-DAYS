string sort(string &s) {
    // Code here

	int count[26] = {0};
	int n = s.size();

	for(int i=0;i<n;i++){
		count[s[i]-'a']++;
	}


	// sort karna hai
	string ans;

	for(int i=0;i<26;i++){
        char c = 'a'+i;
		while(count[i]){
           ans.push_back(c);
		   count[i]--;
		}
	}

	return ans;
}