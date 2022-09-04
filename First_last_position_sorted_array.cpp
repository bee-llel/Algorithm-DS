// Find First and Last Position of Element in Sorted Array- Leetcode 34.
#include<bits/stdc++.h>
using namespace std; 

int findFirst(int start,int end,int target, vector<int> &array){
        
    int mid = 0, position = -1;
    while (start <= end) {
        mid = start + (end - start)/2;

        if (array[mid] == target) {
        // target found at index mid
            position = mid;
        }
        // the idea : =< will still update the value even if target reached until first found
        if (array[mid] >= target) end = mid-1;
        else start = mid+1;
    }
    return position;
}

int findLast(int start,int end,int target, vector<int> &array){
        
    int mid = 0, position = -1;
    while (start <= end) {
        mid = start + (end - start)/2;

        if (array[mid] == target) {
        // target found at index mid
            position = mid;
        }
        // the idea : <= will still update the value even if target reached until last found
        if (array[mid] <= target) start = mid+1;
        else end = mid-1;
    }
    return position;
}

vector<int> searchRange(vector<int>& nums, int target) {
        
        
    int start = 0, end = nums.size()-1;
    vector<int> answer{-1,-1};
        
    if ( nums.empty()){
        return {-1,-1};
        }
    answer[0] = findFirst(start,end,target,nums);
    answer[1] = findLast(start,end,target,nums);
    
    
    
    return answer;
}   


int main(){
    vector<int> nums = {1,2,2,3,3,3,3,3,4,5};
    int target  = 3;
    vector<int> a = searchRange(nums,target);
    cout<<"the answer is :"<<"["<<a[0]<<","<<a[1]<<"]";
    
}