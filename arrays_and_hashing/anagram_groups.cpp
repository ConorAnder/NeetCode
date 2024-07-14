#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> copy = strs;
        vector<vector<string>> solution;
        while (copy.begin() != copy.end()){
            vector<string> group;
            vector<string>::iterator start = copy.begin();
            group.push_back(*start);
            for (vector<string>::iterator next = start + 1; next != copy.end(); next++) {
                if (isAnagram(*start, *next)) {
                    group.push_back(*next);
                    copy.erase(next);
                }
            }
            copy.erase(start);
            solution.push_back(group);
        }
        return solution;
    }

    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, int> s_set, t_set;
        string::iterator s_it = s.begin(), t_it = t.begin();

        while (s_it != s.end()) {
            s_set[*s_it]++;
            t_set[*t_it]++;
            s_it++;
            t_it++;
        }
        return s_set == t_set;
    }
};

int main() {
    Solution solution;
    vector<string> anagrams = {"act","pots","tops","cat","stop","hat"};
    vector<vector<string>> out;
    out = solution.groupAnagrams(anagrams);
    return 0;
}