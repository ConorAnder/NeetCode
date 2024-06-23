#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int it = 0; it < nums.size(); it++) {
            int estimate = target - nums[it];
            for(int second_index = it + 1; second_index < nums.size(); second_index++) {
                if (estimate == nums[second_index])
                    return {it, second_index};
            }
        }
        return {0,0};
    }
};

int main() {
    Solution solution;
    vector<int> nums{3, 4, 5, 6};
    cout << solution.twoSum(nums, 7)[0] << " , " << solution.twoSum(nums, 7)[1] << endl;
    return 0;
}
