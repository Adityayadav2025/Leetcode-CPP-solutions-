class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string t;

        for(char c: s)if( c!= '0') t.push_back(c);

        long long x=0;
        long long y=0;
        if(t.empty())return 0;

        for(char c : t){
        int d=c-'0';
        x=x*10+d;
        y+=d;
        }
        return x*y;
        
    }
};