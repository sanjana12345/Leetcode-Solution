class Solution {
public:
    bool isValid(string A) {
        stack<char>s;
        for(int i = 0; i < A.size(); i++){
        if(A[i] == '['){
            s.push(A[i]);
        }
        else if(A[i] == '('){
            s.push(A[i]);
        }
        else if(A[i] == '{'){
            s.push(A[i]);
        }
        else if(A[i] == ']'){
            if(!s.empty()){
                if(s.top() == '['){
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
        else if(A[i] == '}'){
            if(!s.empty()){
                if(s.top() == '{'){
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
};
