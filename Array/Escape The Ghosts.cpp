class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int max = abs(target[0]) + abs(target[1]);
        for (int i=0; i<ghosts.size(); i++) {
            vector<int>tmp=ghosts[i];
     int ghostmove = abs(tmp[0] - target[0]) + abs(tmp[1] - target[1]);
            if (ghostmove <= max) 
                 return false;
        }
        return true;
    
    }
};
