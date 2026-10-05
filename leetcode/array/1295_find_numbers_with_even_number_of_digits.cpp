class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int digit = 0, even = 0;
        
        for (int num : nums) {
            while (num > 0) {
                digit++;
                num = num / 10;
            }

            if (digit % 2 == 0) even++;
            
            digit = 0;
        }

        return even;
    }
};