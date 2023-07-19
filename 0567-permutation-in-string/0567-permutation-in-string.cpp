class Solution {
public:
    bool checkInclusion(string& s1,string& s2) {
        if (s1.empty() || s1.length() > s2.length()) {
            return false;
        }

        map<char, int> map1;
        for (char ch : s1) {
            map1[ch]++;
        }

        map<char, int> map2;
        int left = 0;
        int right = 0;

        while (right < s2.length()) {
            map2[s2[right]]++;
            if (right - left + 1 < s1.length()) {
                right++;
            } else {
                if (map1 == map2) {
                    return true;
                }
                map2[s2[left]]--;
                if (map2[s2[left]] == 0) {
                    map2.erase(s2[left]);
                }
                left++;
                right++;
            }
        }

        return false;
    }
};