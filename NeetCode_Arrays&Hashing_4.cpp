//NeatCode 150 problwem 1.4
//Group Anagrams

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool angCheck(vector<string> s1, vector<string> s2){
        if (s1.size() != s2.size()) return false;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        return s1 == s2;
    }  

    void printer(vector<string> groups, unordered_map<string,int> pairs, int len){
        cout << "[";
        for(int i = 0; i < len; i++){
            cout << "[" << groups[i];
            int words = pairs[groups[i]];
            while (words > 1) {
                cout << "," << groups[i];
                words--;
            }
            cout << "]";
        }
        cout << "]\n";
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groupedAnagrams;

        for (string& str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            groupedAnagrams[sortedStr].push_back(str);
        }

        vector<vector<string>> result;
        for (auto& entry : groupedAnagrams) {
            result.push_back(entry.second);
        }

        return result;
    }
};
