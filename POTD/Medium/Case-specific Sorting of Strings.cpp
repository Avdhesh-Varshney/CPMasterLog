// 26 January 2023

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:	
	//Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string s1 = "", s2 = "", sn = str;
        sort(str.begin(), str.end());
        int i = 0, j = 0, k = 0;
        while(i < n) {
            if(str[i] <= 90)
                s1 += str[i++];
            else
                s2 += str[i++];
        }
        i = 0;
        while(i < n) {
            if(sn[i] >= 97)
                sn[i++] = s2[j++];
            else
                sn[i++] = s1[k++];
        }
        return sn;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        Solution obj;
        cout << obj.caseSort(str, n) << endl;
    }
    return 0;
}
