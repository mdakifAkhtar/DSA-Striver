//#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int kDistinctChar(string& s, int k) {
    int n = s.size();
    int left = 0, right = 0, maxlen = 0;
    unordered_map<char, int> mp;

    while (right < n) {
        mp[s[right]]++;

        if (mp.size() > k) {
            mp[s[left]]--;

            if (mp[s[left]] == 0) {
                mp.erase(s[left]);
            }

            left++;
        }

        if (mp.size() <= k) {
            maxlen = max(maxlen, right - left + 1);
        }

        right++;
    }

    return maxlen;
}

int main() {
    string s = "aabacbebebe";
    int k = 3;

    cout << kDistinctChar(s, k);

    return 0;
}