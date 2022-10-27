//2nd maethod
//https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/submissions/
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_set<int> s1,s2;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                 if(s1.find(matrix[i][j])!=s1.end())return false;
                 if(s2.find(matrix[j][i])!=s2.end()) return false;
                 else
                 {
                       s1.insert(matrix[i][j]);
                       s2.insert(matrix[j][i]);
                     
                 }
                
            }
            s1.clear();
            s2.clear();
        }
        return true;
        
    }
};
