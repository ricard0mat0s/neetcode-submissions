class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> letterOcurrenceS (26);
        vector<int> letterOcurrenceT (26);

        bool anagram = true;

        for(char c: s) {
            letterOcurrenceS[c - 'a']++;
        }

        for(char c: t) {
            letterOcurrenceT[c - 'a']++;
        }

        for(int i = 0; i < 26; i++) {
            if(letterOcurrenceS[i] != letterOcurrenceT[i]) {
                anagram = false;
                break;
            }
        }
        
        return anagram;
    }
};
