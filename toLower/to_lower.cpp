//
// Created by Adeesh Ankaraju Gopalakrishnan on 2019-01-22.
//

class Solution {
public:
    string toLowerCase(string str) {
        int ascii_sub = 'a'-'A';
        int letter_a = 'a', letter_A = 'A', letter_z = 'z';
        for(int i=0; i<str.length(); ++i){
            int cur_char = str[i];
            if((cur_char >=letter_A) && (cur_char < letter_z) && (cur_char < letter_a)) {
                str[i] = str[i] + ascii_sub;
            }
        }
        return str;
    }
};