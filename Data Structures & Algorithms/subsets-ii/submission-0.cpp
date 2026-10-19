class Solution {
public:
void solve(vector<int> &nums,int start,vector<int> &oup,vector<vector<int>> &ans){

        ans.push_back(oup);
       
   
     for (int i = start; i < nums.size(); i++) {

            if (i > start && nums[i] == nums[i - 1]) {
                continue;
            }

            
            oup.push_back(nums[i]);

            
            solve(nums, i + 1, oup, ans);

            oup.pop_back();
        
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>oup;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        solve(nums,0,oup,ans);
        return ans;
    }
};
