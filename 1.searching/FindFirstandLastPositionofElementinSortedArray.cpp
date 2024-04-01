int firstp(vector<int>&nums,int target){
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int firstocc=-1;
        while(s<=e){
            if(nums[mid]==target){
                firstocc=mid;
                e=mid-1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return firstocc;
    }
    int lastp(vector<int>&nums,int target){
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int lastocc=-1;
        while(s<=e){
            if(nums[mid]==target){
                lastocc=mid;
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return lastocc;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstp(nums,target);
        int last=lastp(nums,target);
        if(first<=last){
            return {first,last};
        }
        return {-1,-1};
    }