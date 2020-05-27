class Solution {
public:   
    bool balance (string A){
        stack<char>s;
        for(int i = 0; i < A.size(); i++){
        if(A[i] == '('){
            s.push(A[i]);
        }
      
        else if(A[i] == ')'){
            if(!s.empty()){
                if(s.top() == '('){
                    s.pop();
                }
                else{
                    return 0;
                }
            }
            else{
                return 0;
            }
        }
        
    }
    
    if(s.empty()){
        return 1;
    }
    
    return 0;
    }
    void generate(int n, vector<string>& vs, string temp, int i,int j){
        if(i==n && j==n){
        if(balance(temp)){
            vs.push_back(temp);
              }
            return;
        }
        if(i<n){
            temp += "(";
           
            generate(n,vs,temp,i+1,j);
             temp.pop_back();
        }
        if(j<i){
            temp += ")";
            generate(n,vs,temp,i,j+1);
             temp.pop_back();
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> vs;
        string temp = "";
        generate(n,vs,temp,0,0);
    return vs;
    }
};
