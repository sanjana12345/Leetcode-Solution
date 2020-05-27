class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector<string> solution;
        int aSize = A.size();
        int bSize = B.size();
        vector<int> frq(26, 0);
        for(int i=0; i<bSize; i++){
            vector<int> tmpfrq(26, 0);
            for(int j=0; j<B[i].length(); j++)
                tmpfrq[(B[i][j] - 'a')]++;
            for(int j=0; j<26; j++)
                frq[j] = max(frq[j], tmpfrq[j]);
        }
        
        for(int i=0; i<aSize; i++){
            vector<int> tmpfrq(frq);
            for(int j=0; j<A[i].length(); j++)
                tmpfrq[(A[i][j]-'a')]--;
            bool found = true;
            for(int j=0; j<26; j++)
                if(tmpfrq[j]>0){
                    found = false;
                    break;
                }
            if(found)
                solution.push_back(A[i]);
        }
        return solution;
    
    }
};
