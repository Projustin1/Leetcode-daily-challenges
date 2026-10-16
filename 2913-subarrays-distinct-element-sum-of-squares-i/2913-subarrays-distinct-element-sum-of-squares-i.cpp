class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int Res = 0;
        for(int i = 0; i < nums.size(); i++){
            unordered_set<int> new_array;      // Makes a new array of unique elements
            for(int j = i; j < nums.size(); j++){
                new_array.insert(nums[j]);  // Inserts the new elements into the array
                Res += new_array.size() * new_array.size(); // adds the square results
            }
        }
        return Res;
    }
};