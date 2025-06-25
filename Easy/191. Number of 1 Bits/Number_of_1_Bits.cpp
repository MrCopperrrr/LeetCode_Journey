class Solution {
public:
    int hammingWeight(int n) {
        string bin = "";
        while (n > 0) {
            // checking the mod 
            int bit = n % 2;
            bin.push_back('0' + bit);
            n /= 2;
        }
        
        // reverse the string 
        reverse(bin.begin(), bin.end());
        int count = 0;
        for (int i =0; i<bin.length();i++){
            if(bin[i] == '1') count+=1;
        }
        return count;
    }
    
};