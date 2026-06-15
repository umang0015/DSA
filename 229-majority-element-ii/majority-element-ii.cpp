class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        unordered_map<int , int> elementCountMap;

        for(int i= 0; i<nums.size(); i++){
            elementCountMap[nums[i]]++;

        }

        vector<int> majority;

        int threshold = nums.size()/3;

        for(auto elementCountPairs : elementCountMap) {
                int element  = elementCountPairs.first;
                int count = elementCountPairs.second;

                if(count > threshold) {
                    majority.push_back(element);
                }
        }

    return majority;


        

    }
};