// Question 2

// Problem Link
// https://leetcode.com/problems/reverse-words-in-a-string-iii/

// Solution:

// Way :- 1
class Solution {
public:
    string reverseWords(string s) {
        vector<string> str;
        string temp, t;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') {
                str.push_back(temp);
                temp = "";
            }
            else
                temp.push_back(s[i]);
        }
        str.push_back(temp);
        for(auto i : str) {
            for(int j = i.length()-1; j >= 0; j--)
                t.push_back(i[j]);
            t.push_back(' ');
        }
        t.pop_back();
        return t;
    }
};

// Way :- 2
class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string word, reversed_sentence = "";
        while(iss >> word) {
            reverse(word.begin(), word.end());
            reversed_sentence += word + " ";
        }
        reversed_sentence.pop_back();
        return reversed_sentence;
    }
};