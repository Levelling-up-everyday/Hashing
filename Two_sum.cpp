class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        vector<int>answer;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(target-nums[i])!=mpp.end())
            {
                  answer.push_back(i);
                answer.push_back(mpp[target-nums[i]]);
                 return answer;
            }
            mpp[nums[i]]=i;
        }
        return answer;
    }
};
