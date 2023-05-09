#include<iostream>
#include<vector>
using namespace std;


class Solution {
  private:
  
 void solve(vector<int> nums  ,vector<vector<int>> &ans ,int index){

    // base case;
    if(index>=nums.size()){
      ans.push_back (nums);
      
      return ;
    }
    
    for(int j=index; j<nums.size();j++){
      
      swap(nums[index] ,nums[j]);
      
      solve(nums ,ans ,index+1);
      
//       backtracking;
      swap(nums[index] ,nums[j]);//becz we nutralise the string as a previously original case;
      //becz we again iterate in the same str; if we not back track then our str will be changed and permutaion will be wrong;
      
    }
    

  }
public:
    vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> ans;
      
      int index =0;
      
      solve(nums ,ans ,index);
      return ans;
    }
};
int main(){

return 0;
}