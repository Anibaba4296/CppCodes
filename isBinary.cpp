// Check if given number is binary or not
// Note: if output is '1' ==> string is binary 
//                    '0' ==> string is not binary
#include <bits/stdc++.h>
using namespace std;

bool isBinary(string str);

int main()
{
    string str;
       cin >> str;
       cout << isBinary(str) << endl;
    return 0;
}


// Return true if str is binary, else false
bool isBinary(string str)
{
   for(int i=0;i<str.length();i++){
       if(str[i]!='1' && str[i]!='0'){
           return false;
       }
   }
   return true;
}