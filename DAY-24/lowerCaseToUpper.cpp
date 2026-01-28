string toUpper(string &str) {
    // Your code here

	for(int i=0;i<str.size();i++){
		if(str[i]>='a'&&str[i]<='z'){
			str[i] =  str[i]-32;
		}
	}

	return str;
}