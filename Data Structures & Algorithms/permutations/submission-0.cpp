class Solution {
public:
vector<int>path;
vector<vector<int>>ans;
void solve(vector<int>& nums,vector<bool>& used){
    if(path.size()==nums.size()){
        ans.push_back(path);
        return ;
    }
    for(int i=0;i<nums.size();i++){
        if(used[i])continue;
        path.push_back(nums[i]);
        used[i]=true;
        solve(nums,used);
        path.pop_back();
        used[i]=false;
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>used(nums.size(),false);
        solve(nums,used);
        return ans;
    }
};
