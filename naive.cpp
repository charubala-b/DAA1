#include <bits/stdc++.h>
using namespace std;

void search(string& pat, string txt)
{
    int p = pat.size();
    int t = txt.size();
    for (int i = 0; i <= t - p; i++) {
        int j;
        for (j = 0; j < p; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j== p)
            cout << "Pattern found at index " << i << endl;
    }
}
int main()
{
    string txt;
     string pat;
     cin>>txt;
     cin>>pat;
    search(pat, txt);
    return 0;
}
