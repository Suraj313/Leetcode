#include<iostream>
#include<vector>
using namespace std;
void Permutation(int index,vector<int>& nums)
    {
        // base condition
        if(index==nums.size()){
            for( auto it : nums) cout<<it<<" ";
            cout<<endl;
            return;
        }
        for(int i = index ; i<=nums.size()-1;i++){
            swap(nums[index],nums[i]);
            Permutation(index+1,nums);
            swap(nums[index],nums[i]);
        }
    }
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    Permutation(0,v);
    return 0;
}  
// Output -  
1 2 3
1 3 2
2 1 3
2 3 1
3 2 1
3 1 2