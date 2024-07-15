#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> solution;
        
        for (string s : strs) {
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            map[sorted].push_back(s);
        }

        unordered_map<string, vector<string>>::iterator it = map.begin();
        while (it != map.end()) {
            solution.push_back(it->second);
            it++;
        }

        return solution;
    }
};