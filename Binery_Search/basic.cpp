#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        bool found=false;
        int l=0, r=nums.size()-1;
        while(l<=r){
            int avg = (r+l)/2;
            if(nums[avg]==target) return avg;
            else if(nums[avg]<target) l=avg+1;
            else r=avg-1;
        }
        return -1;
    }
};

int main(){
     vector<int> v={1,3,4,5,6};
     Solution solution;
     int result = solution.search(v,5);
     cout << result<<"\n";
     // Using STL
     cout << binary_search(v.begin(),v.end(),3)<< endl;

}
