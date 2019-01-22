//
// Created by Adeesh Ankaraju Gopalakrishnan on 2019-01-22.
//

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ret_list;
        for(int i=left; i<=right;++i){
            if(self_div_num(i)){ ret_list.push_back(i);}
        }
        //cout<< self_div_num(17) <<endl;
        return ret_list;
    }
    bool self_div_num(int num){
        int temp_num = num;
        int num_digits =0;
        while(temp_num) {
            ++num_digits;
            temp_num /= 10;
        }
        temp_num = num;
        while(num_digits){
            int div_val;
            if(!(--num_digits)) {
                div_val = temp_num;
            }
            else {
                div_val = temp_num%10; temp_num/=10;
            }
            if(!div_val) {
                return false;
            } else if(num%div_val){
                return false;
            }
        }
        return true;
    } // bool self_div_num
};