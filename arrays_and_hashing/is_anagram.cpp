#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
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
