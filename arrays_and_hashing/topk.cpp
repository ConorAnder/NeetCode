#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        vector<int> solution;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
            map[*it]++;
        }
        for (int i = 0; i < k; i++) {
            unordered_map<int, int>::iterator max = map.begin(), it;
            for (it = map.begin(); it != map.end(); it++) {
                if (it->second > max->second)
                    max = it;
            }
            solution.push_back(max->first);
            map.erase(max);
        }
        return solution;
    }
};