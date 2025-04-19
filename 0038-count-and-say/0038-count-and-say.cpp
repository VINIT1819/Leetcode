class Solution {
public:
    string countAndSay(int n) {
        if(n==1)    return "1";

        string number = "1";
        for(int i=2;i<=n;++i){
            //Build new string
            string res;
            int count = 1;
            char curr = number[0];
            for(int j=1;j<number.size();++j){
                if(number[j]==curr) count++;
                else{
                    res += to_string(count) + curr;
                    curr = number[j];
                    count = 1;
                }
            }
            res += to_string(count) + curr;
            number = res;
        }
        return number;
    }
};