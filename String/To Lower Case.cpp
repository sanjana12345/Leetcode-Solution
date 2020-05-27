class Solution {
public:
    string toLowerCase(string str) {
         for(auto &c : str){
            if(c >= 65 && c <= 90){
               c += 32; 
            }
        }
        return str;
    }
};
