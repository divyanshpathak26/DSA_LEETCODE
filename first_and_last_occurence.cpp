int firstIndex(vector<int>& nums,int n,int key){

    int s=0;
    int e=n-1;

    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(nums[mid]==key){
            ans= mid;
            e=mid-1;
     
       }
       else if(nums[mid]>key){
        e=mid-1;
       }
       else{
        s=mid+1;
       }
       mid=s+(e-s)/2;
    }
    return ans;

 }

 int lastIndex(vector<int>& nums,int n,int key){

    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){

        if(nums[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(nums[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
 }


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

       
        int n = nums.size();
        int first = firstIndex(nums, n, target);
        int last = lastIndex(nums, n, target);
        return {first, last};
    }
};