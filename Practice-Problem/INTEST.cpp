// Enormous Input Test
// Problem Code - INTEST

// https://www.codechef.com/problems/INTEST

// Solution:

// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,k;
    cin >> n >> k;

    int count=0;
    for (int i=0;i<=n-1;i++)
    {
        int a;
        cin >> a;
        if (a%k==0)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}