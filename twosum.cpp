class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> vec;  

        for (int i = 0; i < nums.size(); i++) {
            vec.push_back({nums[i], i});
        }


        sort(vec.begin(), vec.end());

        int s = 0, e = nums.size() - 1;

        while (s < e) {
            int sum = vec[s].first + vec[e].first;

            if (sum > target)
                e--;
            else if (sum < target)
                s++;
            else
                return {vec[s].second, vec[e].second}; 
        }

        return {};  
    }
};

        
