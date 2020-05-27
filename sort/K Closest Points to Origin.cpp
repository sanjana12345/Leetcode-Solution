class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
       int i,j;
        vector<pair<int,int>>v;
        vector<vector<int>> res;
        for(i=0; i<points.size(); i++){
            int x=points[i][0];
            int y=points[i][1];
            int z=(x*x)+(y*y);
            v.push_back({z,i});
        }
        sort(v.begin(),v.end());
        for(i=0; i<K; i++){
         vector<int>temp;
            pair<int,int>tm=v[i];
            int k=tm.second;
            temp.push_back(points[k][0]);
            temp.push_back(points[k][1]);
            res.push_back(temp);
        }
        return res;
    }
};
