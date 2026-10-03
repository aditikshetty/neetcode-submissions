class Solution {
public:
void solve(vector<int>input,vector<int>output,vector<vector<int>> &ans){
    if(input.size()==0){
        ans.push_back(output);
        return;
    }
    vector<int>op1=output;
    vector<int>op2=output;
    op1.push_back(input[0]);
    input.erase(input.begin()+0);
    solve(input,op1,ans);
    solve(input,op2,ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        vector<vector<int>>ans;
        solve(nums,output,ans);
        return ans;
    }
};
