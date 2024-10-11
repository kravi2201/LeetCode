class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";

        int iteration;
        for(iteration=0;iteration<word1.length()||iteration<word2.length();iteration++){
            if(iteration<word1.length()){
                result += word1[iteration];
            }

            if(iteration<word2.length()){
                result += word2[iteration];
            }
        }
        return result;

    }
};