class Solution {
public:
    string defangIPaddr(string address) {
        int idx = 0;
        string res;
        while(idx < address.size()){
            if(address[idx] == '.'){
                res = res + "[.]";
            } else {
                res = res + address[idx];
            }
            idx++;
        }
        return res;
    }
};
