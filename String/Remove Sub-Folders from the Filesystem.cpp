class Solution {
public:
    bool find(unordered_set<string> &s, string &ss)
{
        int l=ss.length(),i;
        string temp="";
        temp.push_back(ss[0]);
        for(i=1; i<l; i++){
            if(ss[i]=='/'){
                if(s.count(temp)){
                 return true;   
                }
            }
            temp.push_back(ss[i]);
        }
        return false;
}


    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_set<string>s;
        int l=folder.size(),i;
        for(i=0; i<l; i++)
             s.insert(folder[i]);
        
        vector<string>result;
        for(i=0; i<l; i++){
            if(!find(s,folder[i]))
                result.push_back(folder[i]);
        }
        return result;
    }
};
