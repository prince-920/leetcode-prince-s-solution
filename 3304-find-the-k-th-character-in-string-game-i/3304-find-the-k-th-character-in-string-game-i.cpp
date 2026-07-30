class Solution {
public:
    char solve(string word, int k) {
        // base case
        if (word.length() >= k) {
            return word[k - 1];
        }

        string s = "";
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == 'z') {
                s.append("a");
            } else {
                char ch = (char)(word[i] + 1);
                s.push_back(ch);
            }
        }
        word = word + s;

        return solve(word, k);
    }


    char kthCharacter(int k) {
    return solve("a", k);
}
};
