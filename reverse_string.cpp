
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=0;
        int p= s.size()-1;
        while(p>n){
            swap(s[n++],s[p--]);
        }
    }
};