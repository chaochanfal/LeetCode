class FindRepeatNumber{

int findRepeatNumber(vector<int>& nums) {
           int findRepeatNumber(vector<int>& nums) {
        //遍历数组，将i与nums[i]对应起来
        for(int i = 0; i < nums.size(); ++i) {
            //如果当前值的下标不等于当前值,如 1 != nums[1]:2
            while(i != nums[i]) {
                //如果nums[1]:2 == nums[2]，找到相同数字，但下标不同，则说明出现重复数字
                if(nums[i] == nums[nums[i]])
                    //返回该数字
                    return nums[i];
                //若不相等
                else
                    //则交换nums[i]和nums[nums[i]]，一直循环交换
                    swap(nums[i], nums[nums[i]]);
            }
        }
        return 0;
    }

}
