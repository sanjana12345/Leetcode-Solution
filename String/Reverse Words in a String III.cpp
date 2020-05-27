#include<bits/stdc++.h>

class Solution {
public:
    string reverseWords(string s) {
         string str="";
        string ss="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(ss.begin(),ss.end());
                str+=ss;
                str+=" ";
                ss="";
            }
            else
                ss+=s[i];
        }
        reverse(ss.begin(),ss.end());
        str+=ss;
        return str;
    }
};
