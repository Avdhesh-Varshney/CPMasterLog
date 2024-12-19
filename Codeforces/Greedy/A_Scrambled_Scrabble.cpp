#include <bits/stdc++.h>
using namespace std;
const int MXA = 26;

int main() {
	string S;
	cin >> S;
	int N = S.length(), freq[MXA + 69];
	for(int i = 0; i < MXA; i++) freq[i] = 0;
	for(int i = 0; i < (int)S.length(); i++) freq[S[i] - 'A']++;

	int vowels = freq[0] + freq[4] + freq[8] + freq[14] + freq[20];
	int consonants = N - vowels, wordLength = 0;
    for(int i = 0; i <= min(freq[6], freq[13]); i++) {
		int remConsonants = consonants - i * 2 - freq[24];
		int syllables = min({vowels + freq[24], (remConsonants + i + freq[24]) / 2, (vowels + remConsonants + i + freq[24]) / 3});
		int letters = syllables * 3 + min(i, syllables * 2);
		wordLength = max(wordLength, letters);
	}
    cout << wordLength << endl;
    return 0;
}