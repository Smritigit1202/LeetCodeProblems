class Solution {
public:

// simply apply % logic and make a new vector temp 
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> temp = code; 
        for (int i = 0; i < n; i++) {
            code[i] = 0;

            if (k > 0) {  
                for (int j = 1; j <= k; j++) {
                    code[i] += temp[(i + j) % n]; 
                }
            } 
            else if (k < 0) {  
                for (int j = -1; j >= k; j--) {
                    code[i] += temp[(i + j + n) % n]; }
            }
        }

        return code;
    }
};
