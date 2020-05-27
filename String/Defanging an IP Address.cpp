class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.length(); int i;
        string s="";
        for(i=0; i<n; i++){
            if(address[i]!='.'){
                s+=address[i];
            }
            else{
                s+='[';
                s+=address[i];
                s+=']';
            }
        }
        return s;
    }
};
