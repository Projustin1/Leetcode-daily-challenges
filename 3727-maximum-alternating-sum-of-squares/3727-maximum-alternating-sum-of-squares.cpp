class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int size = nums.size();
        long long result = 0;

        // This code squares all of the elements in the list
        for (int i = 0; i < size; i++) {
            nums[i] = nums[i] * nums[i];
        }

        // This sorts the list of the squared elements
        sort(nums.begin(), nums.end());

        // This subtracts the smaller half of the squared elements
        for (int i = 0; i < size / 2; i++) {
            result -= nums[i];
        }

        // This adds all of the larger half elements of the squared elements
        for (int i = size / 2; i < size; i++) {
            result += nums[i];
        }
        // This returns the result of the maximum alternating sum
        return result;
    }
};