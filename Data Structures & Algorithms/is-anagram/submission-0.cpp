class Solution {
public:
    bool isAnagram(string s, string t) {

        if (t.length() != s.length()) {
    return false;
}

        //let's start by counting characters in c.
        vector<int> count(26, 0);  //initialise 26 indexes for 26 alphabets

        for(char c:s){
            count[c-'a']++;
        }

        //start deleting counts from t
        for(char c:t){
            count[c-'a']--;
        }

        for(int num: count){
            if(num!=0){
                return false;
            }
        }

        return true;

    }
};
