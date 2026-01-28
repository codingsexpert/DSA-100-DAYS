class Solution {
public:
    string defangIPaddr(string address) {
        //Code here

		string ans;

		for(int i=0;i<address.size();i++){
			if(address[i]=='.'){
				ans = ans+"[.]";
			}
			else{
				ans.push_back(address[i]);
			}
		}

		return ans;
    }


};