// Problem Link
// https://leetcode.com/problems/goal-parser-interpretation/

// Solution:
class Solution {
public:
    string interpret(string command) {
        string s;
        for(int i = 0; i < command.length(); i++) {
            if(command[i] == 'G')
                s.push_back('G');
            else if(command[i] == '(' and command[i+1] == ')') {
                i++;
                s.push_back('o');
            }
            else if(command[i] == '(' and command[i+1] == 'a' and command[i+2] == 'l' and command[i+3] == ')') {
                i += 3;
                s.push_back('a');
                s.push_back('l');
            }
        }
        return s;
    }
};