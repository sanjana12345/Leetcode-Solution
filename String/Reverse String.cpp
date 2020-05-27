class Solution {
public:
    void reverseString(vector<char>& s) {
     if(s.empty())
return;
int i = 0;
int j = s.size()-1;
char s1;
while(i<=j)
{
swap(s[i++],s[j--]);
}
}
};
