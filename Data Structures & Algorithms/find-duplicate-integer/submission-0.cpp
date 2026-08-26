class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> count;
         for(int num:nums){
            if(count.find(num)!=count.end()){
                return num;
            }
            count.insert(num);
         }
         return -1;
    }
};
