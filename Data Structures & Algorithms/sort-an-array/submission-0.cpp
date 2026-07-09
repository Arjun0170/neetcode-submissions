class Solution {
public:
void mergeparts(vector<int> &v,int low, int mid, int high )
{
    vector<int>temp;
    int left=low;
    int right= mid+1;
    while(left<=mid&&right<=high){
        if(v[left]<=v[right]){
            temp.push_back(v[left]);
            left++;
        }
        else{
            temp.push_back(v[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(v[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(v[right]);
        right++;
    }
    for(int i= low;i<=high;i++){
        v[i]=temp[i-low];
    }
}



//divide function
void mergesort(vector<int> &v1, int low,int high){
    if(low==high)
    return;
    int mid =(low+high)/2;
    mergesort(v1, low, mid);
    mergesort(v1, mid+1, high);
    mergeparts(v1,low,mid,high);
}

    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergesort(nums,0,n-1);
        return nums;
        
        
    }
};