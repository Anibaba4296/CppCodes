#include <bits/stdc++.h>
using namespace std;

class Solution{
public:		
	int isPalindrome(string S)
	{
	    string str="";
	    for(int i=S.length()-1;i>=0;i--){
	        str+=S[i];
	    }
	    if(S==str){
	        return 1;
	    }else{
	        return 0;
	    }
	}
};

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   		string s;
   		cin >> s;
   	  Solution ob;
   		cout << ob.isPalindrome(s);

    return 0;
} 
