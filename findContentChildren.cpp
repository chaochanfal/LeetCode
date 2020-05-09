class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        std :: sort(g.begin() , g.end() );//小孩
        std :: sort(s.begin() , s.end() );//饼干

        int ans=0;
        int j=0;//第J个饼干
        for (int i =0 ;i< g.size() ; i++) {
            while (j<s.size() && s[j] <g[i]) {//s[j] >= g[i] 第J个饼干 符合第g[i]个小孩胃口
                j++;//如果第J个饼干滿足不了任何人,就下一个饼干 j++ 
            }
            if( j<s.size()) {
                ++ans;
                ++j;
            }
        }
        return ans;
    }
