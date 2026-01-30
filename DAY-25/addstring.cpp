class Solution {
public:
    
    // num1 = "248" , num2 = "9675"
	// sum = 13
	// ans = 3
	// carry = 1
    string addStrings(string num1, string num2) {
        //Code here

		int EndFirst = num1.size()-1, EndSecond = num2.size()-1, carry = 0;
		string ans;

		while(EndFirst>=0||EndSecond>=0||carry!=0){
			int sum = carry;

			if(EndFirst>=0){
				sum += num1[EndFirst]-'0';
				EndFirst--;
			}
			if(EndSecond>=0){
				sum += num2[EndSecond]-'0';
				EndSecond--;
			}

			ans.push_back(sum%10+'0');
			carry = sum/10;

		}

        
		// reverse the string
		reverse(ans.begin(),ans.end());

		return ans;
	}

};