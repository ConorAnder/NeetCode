#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool flag = false;
        if (nums.begin() != nums.end()) {    sort(nums.begin(), nums.end());
            vector<int>::iterator it1 = nums.begin();
            for (vector<int>::iterator it2 = ++it1; it2 != nums.end(); it1++, it2++)
                if (*it1 == *it2) flag = true;}
        return flag;
    }
};
