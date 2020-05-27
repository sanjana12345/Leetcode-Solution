class Solution {
public:
     unordered_set<string> result; 
     unordered_set<string> visited; 
     void permutation(string data)
     {
         result.insert(data); 
         while(next_permutation(data.begin(),data.end())) 
             result.insert(data);
     }
     void helper(string tiles,int index,string temp)
     {
         if(index==tiles.size())
             return;
         for(int i=index;i<tiles.size();i++)
         {
             temp.push_back(tiles[i]);
             if(visited.count(temp)==0)
             {
                 permutation(temp);
                 visited.insert(temp); 
             }
             helper(tiles,i+1,temp); 
             temp.pop_back(); 
         }
     }
     int numTilePossibilities(string tiles)
     {
         sort(tiles.begin(),tiles.end()); 
         helper(tiles,0,"");
         return result.size();
     }
};
