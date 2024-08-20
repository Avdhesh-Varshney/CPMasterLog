// https://leetcode.com/problems/replace-words/description/?envType=daily-question&envId=2024-06-07

class Solution {
public:
    void fillArray(vector<string>& words, string& sentence) {
        string word = "";
        for(auto &ch : sentence) {
            if(ch == ' ') {
                if(word != "") words.emplace_back(word);
                word = "";
            } else word += ch;
        }
        if(word != "") words.emplace_back(word);
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        vector<string> words;
        fillArray(words, sentence);
        for(auto &word : dictionary) replaceWord(words, word);
        sentence = "";
        for(auto &word : words) {
            sentence += word;
            sentence += " ";
        }
        sentence.pop_back();
        return sentence;
    }
    void replaceWord(vector<string>& words, string& word) {
        int l = word.length();
        for(auto &i : words) {
            if(i.length() < l) continue;
            if(i[0] == word[0] && verify(i, l, word)) i = word;
        }
    }
    bool verify(string& word1, int& l, string& word) {
        for(int i = 0; i < l; i++) if(word1[i] != word[i]) return false;
        return true;
    }
};