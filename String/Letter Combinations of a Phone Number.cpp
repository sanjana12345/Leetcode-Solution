class Solution {
public:
    vector<string> letterCombinations(string digits) {
      vector <string> data = {" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"} ;  
      vector<string> ans = {""}; 
        if(digits.size() == 0) 
            return vector<string>();
        for(int x=0; x<digits.size(); x++){
            int num = digits[x]-'0';
            string current = data[num];
            vector<string>temp;
            for(int i=0; i<current.size(); i++){
                for(int j=0; j<ans.size();j++){
                    temp.push_back(ans[j]+current[i]);
                }
            }
            ans.swap(temp);
            temp.clear();
        }
        return ans;  
    }
};
