码字A为 10001001
码字B为 10110001
那么不同的字符数为3，汉明距离就是3

>>是右移运算符知。
假设x=5，那么x的道二进制为0101，x>>1表示回x右移1位，即把最右边一位的1删掉，变为010，此时x=2；
仍然设x=5，二进制0101，x>>2表示x右移2位，把最右边两位的01去掉，变为01，此时x=1。
x>>=1等价答于x=x>>1，跟x+=1等价于x=x+1是一个道理

class Solution {
public:
    int hammingDistance(int x, int y) {
                int ans=0;
           for (int i=0 ;i< 31 ; i++) {
           // 相当于取出x,y的二进制
                int bx=x%2;
                int by=y%2;
                if( bx != by) ++ans;
                x >>=1;
                y >>=1;
           }
            return ans;

    }
};
