class Solution {
    public int jump(int[] nums) {
        int length = nums.length;
        int end = 0;
        int maxPosition = 0; 
        int steps = 0;
        for (int i = 0; i < length - 1; i++) {
            maxPosition = Math.max(maxPosition, i + nums[i]); 
            //i + nums[i]取得下标加下标的值 的值,下标的值也是跳的距離,就可以取得这个下标下一跳的所在的下标,
            if (i == end) {
                end = maxPosition;
                steps++;
            }
        }
        return steps;
    }
}
这句的作用，其实就是 更新 下一步 能够到达的 最远下标；其中i+nums[i]就是当前下标+在该下标位置可跳跃的最大长度nums[i] = 从该下标可到达的最远下标。
纵观 方法二的思路 ，其实就是在每次最远下标位置更新步数 【end = maxPos; //下一步最远就到maxPos； step++; //此处得跳一步】
所以上句就是为保证步数最少，求得本次跳跃之后下一次跳跃的最远下标，因为会有本次跳跃途径下标的可到达的最远下标大于当前的end。 
例如【2，3，1，1，4】，下标为0时可跳跃的最远下标为0+2=2，但是0---2之间途径的1位置的3意味着：可以从0先跳到1，下一步最远下标就是Max(2,1+3) = 4,
因此，当i == 2时（i== end）,将end更新为4，step++；这样就保证每次更新步数都是在最远下标更新，这样步数才最少； 个人理解，希望对你的理解提供帮助。
