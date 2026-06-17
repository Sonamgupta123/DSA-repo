class Solution {
public:
    char processStr(string s, long long k) {
        const long long INF = 1000000000000001LL; // 1e15 + 1
        int n = s.size();

        vector<long long> len(n + 1, 0);

        // Forward pass: store lengths
        for (int i = 0; i < n; i++) {
            char ch = s[i];

            if ('a' <= ch && ch <= 'z') {
                len[i + 1] = min(INF, len[i] + 1);
            } 
            else if (ch == '*') {
                len[i + 1] = (len[i] > 0 ? len[i] - 1 : 0);
            } 
            else if (ch == '#') {
                len[i + 1] = min(INF, len[i] * 2);
            } 
            else { // '%'
                len[i + 1] = len[i];
            }
        }

        if (k < 0 || k >= len[n]) return '.';

        // Reverse pass: trace k back to the originating character
        for (int i = n - 1; i >= 0; i--) {
            char ch = s[i];

            long long prevLen = len[i];
            long long currLen = len[i + 1];

            if ('a' <= ch && ch <= 'z') {
                if (k == prevLen) return ch; // appended character
                // otherwise k stays the same in previous string
            }
            else if (ch == '*') {
                // current string is previous string without last char
                // indices map directly
            }
            else if (ch == '#') {
                // current = prev + prev
                if (k >= prevLen) k -= prevLen;
            }
            else { // '%'
                // current = reverse(prev)
                k = prevLen - 1 - k;
            }
        }

        return '.';
    }
};