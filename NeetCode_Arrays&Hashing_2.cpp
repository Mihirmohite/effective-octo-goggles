//CPP solution scripts for NeatCode, solved on LeetCode, NeatCode 150 problem 1.2
//Problem 2: Valid Anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());
        return s == t;
    }
};
