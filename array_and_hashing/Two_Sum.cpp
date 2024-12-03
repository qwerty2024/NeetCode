class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> s;

        for (int i = 0; i < nums.size(); i++)
        {
            int tmp = target - nums[i];

            if (s.find(tmp) != s.end())
            {
                return {s[tmp], i};
            }
            else
            {
                s[nums[i]] = i;
            }
        }

        return {0, 0};
    }
};