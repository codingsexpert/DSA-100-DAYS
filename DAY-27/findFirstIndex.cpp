int strStr(string &haystack, string &needle) {

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
	return suffix-prefix;
  }
  else{
	return -1;
  }

}