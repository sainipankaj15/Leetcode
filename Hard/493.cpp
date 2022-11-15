// Going to mergesort for it
class Solution {

int merge(vector<int> &nums, int start, int mid, int end){
    int ans=0;

    int i=start;
    int j = mid+1;
    int k = start;

    for(i = start;i<=mid;i++){
        while(j<=end && nums[i]>2ll*nums[j]){
            j++;
        }
        ans+=(j-(mid+1));
    }



    vector<int> temp;
    i = start;
    j = mid+1;
    while(i<=mid && j<=end){
        if(nums[i]<=nums[j]){
           temp.push_back(nums[i++]);
        }
        else{
            temp.push_back(nums[j++]);
        }
    }

    while(i<=mid)
     temp.push_back(nums[i++]);

    while(j<=end)
     temp.push_back(nums[j++]);


    for(int i=start;i<=end;i++){
        nums[i] = temp[i-start];
    }
   

   return ans;
}

int mergeSort(vector<int> &nums, int start, int end){
    int ans=0;
    int mid=0;
     if(start >= end) 
     return 0;
    if(start<end){
        mid = (start+end)/2;
        ans+=mergeSort(nums,start,mid);
        ans+=mergeSort(nums,mid+1,end);
        ans+=merge(nums,start,mid,end);
    }

    return ans;
}

public:
    int reversePairs(vector<int>& nums) {
        int start=0;
        int end = nums.size()-1;
        int ans=0;
        // vector<int> temp;
        ans = mergeSort(nums,start,end);
        return ans;
    }
};








// second

// Going to mergesort for it
class Solution {

int mergeSort(vector<int> &nums, vector<int> &temp, int start, int mid, int end){
    int ans=0;

    int i=start;
    int j = mid+1;
    int k = start;

    for(int i = start;i<=mid;i++){
        while(j<=end && nums[i]>2ll*nums[j]){
            j++;
        }
        ans = ans + (j-(mid+1));
    }

    i = start;
    j = mid+1;
    while(i<=mid && j<=end){
        if(nums[i]<=nums[j]){
            temp[k++] = nums[i++];
        }
        else{
            temp[k++] = nums[j++];
        }
    }

    while(i<=mid)
    temp[k++] = nums[i++];

    while(j<=end)
    temp[k++] = nums[j++];


    for(int i=start;i<=end;i++){
        nums[i] = temp[i];
    }
   

   return ans;
}

int solve(vector<int> &nums, vector<int> &temp, int start, int end){
    int ans=0;
    int mid=0;

    if(start<end){
        mid = (start+end)/2;
        ans+=solve(nums,temp,start,mid);
        ans+=solve(nums,temp,mid+1,end);
        ans+=mergeSort(nums,temp,start,mid,end);
    }

    return ans;
}

public:
    int reversePairs(vector<int>& nums) {
        int start=0;
        int end = nums.size()-1;
        int ans;
        vector<int> temp(end+1);
        ans = solve(nums,temp,start,end);
        return ans;
    }
};