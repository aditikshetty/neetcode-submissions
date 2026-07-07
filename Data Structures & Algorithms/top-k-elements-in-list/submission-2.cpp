class Solution {
public:
   
        vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> count;

    for(int num : nums)
        count[num]++;

    vector<pair<int,int>> arr;

    for(const auto& p : count)
        arr.push_back({p.first, p.second});

    sort(arr.begin(), arr.end(),
         [](const pair<int,int>& a, const pair<int,int>& b){
             return a.second > b.second;
         });

    vector<int> res;

    for(int i=0; i<k; i++)
        res.push_back(arr[i].first);

    return res;
}
    };
