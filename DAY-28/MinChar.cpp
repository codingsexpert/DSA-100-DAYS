bool KMP(string &haystack, string &needle) {

  int n = needle.size(), m= haystack.size();

  vector<int>LPS(n,0);
  int prefix = 0, suffix = 1;

  while(suffix<n){
	if(needle[prefix]==needle[suffix]){
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
  };


  prefix =0, suffix = 0;

  while(prefix<n&&suffix<m){
	if(haystack[suffix]==needle[prefix]){
		suffix++, prefix++;
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

  if(prefix==n){
	return 1;
  }
  else{
	return 0;
  }

}




int repeatedStringMatch(string &a, string &b) {
    

	// string a uske size ko atleast string B ke barabar karna

	int repeat = 1;
    string newStr = a;

	while(newStr.size()<b.size()){
		newStr+=a;
		repeat++;
	}
     

	if(KMP(newStr,b)){
		return repeat;
	} 


	//  ek last time repeat kar do

	newStr+=a;
	repeat++;

	if(KMP(newStr,b)){
		return repeat;
	} 

	return -1;

	
}