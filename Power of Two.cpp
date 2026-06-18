class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
         return false;
        int ans = 1;
        int range = pow(2,30);
        while (ans < n && n <= range){
            ans = ans * 2;
        }
        if (n == ans)
         return true;
        return false; 
   }
};
