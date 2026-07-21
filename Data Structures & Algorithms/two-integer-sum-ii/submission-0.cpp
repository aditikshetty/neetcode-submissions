class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int indx1=0;
        int indx2=numbers.size()-1;
        while(indx1<indx2){
        int sum=numbers[indx1]+numbers[indx2];
           
            if(sum>target){
                indx2--;
            }else if(sum < target){
                indx1++;
                
            }else{
                return {indx1+1,indx2+1};
            }
        }
        return {};
    
    }
};
