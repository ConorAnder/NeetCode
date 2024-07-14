#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string encoded_string = "";
    string encode(vector<string>& strs) {
        for (vector<string>::iterator it = strs.begin(); it != strs.end(); it++)
            encoded_string += *it + '/';
        return encoded_string;
    }

    vector<string> decode(string s) {
        string word;
        vector<string> solution;
        for (char c:s) {
            if (c != '/') {
                word += c;
                c++;
            }
            else {
                solution.push_back(word);
                word = "";
                c++;
            }
        }
        return solution;
    }
};
