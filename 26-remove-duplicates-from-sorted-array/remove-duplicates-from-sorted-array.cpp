class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     set<int>s;
     for (int x : nums ){
        s.insert(x);
     }   
     int index  = 0;
     for(int val : s){

     nums[index] = val;
     index++;
     }

     return s.size();
    }
};