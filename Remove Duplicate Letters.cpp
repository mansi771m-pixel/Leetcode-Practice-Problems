class Solution {
public:
    string removeDuplicateLetters(string s) {
        int freq[26] = {0};
        bool seen[26] = {false};

        for (char c : s)
            freq[c - 'a']++;

        string st;

        for (char c : s) {
            freq[c - 'a']--;

            if (seen[c - 'a'])
                continue;

            while (!st.empty() &&
                   st.back() > c &&
                   freq[st.back() - 'a'] > 0) {
                seen[st.back() - 'a'] = false;
                st.pop_back();
            }

            st.push_back(c);
            seen[c - 'a'] = true;
        }

        return st;
    }
};
