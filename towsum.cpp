class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> index;//建立一个哈希表 map<key,value>
        for (int i=0;i < nums.size() ; i++) {
          index[nums[i]]=i;
        }
        for (int i = 0 ;i <nums.size() ; i++) {
            int temp = target -nums[i];
            if(index.count(temp) && index[temp] != i)
            return {i,index[temp]};
        }
        return {};
    }
};
