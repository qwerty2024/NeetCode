class Solution 
{
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        unordered_set<int> m;

        for (auto a : nums)
            if (m.find(a) != m.end())
                return true;
            else
                m.insert(a);
        
        return false;
    }
};