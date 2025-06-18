class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int id = 0;
        for(int i = 0; i < nums.size(); i++){
            id = id ^ nums[i];
        }   
        return id;
    }
};