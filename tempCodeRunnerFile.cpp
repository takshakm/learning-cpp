class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
        while(i){
            if(pow(2,i)==n)
                return true;
        }
        ++i;
    }
};