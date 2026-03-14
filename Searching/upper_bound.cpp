int upperBound(vector<int>& arr,int x){
    int l=0,r=arr.size();
    while(l<r){
        int mid=(l+r)/2;
        if(arr[mid]<=x) l=mid+1;
        else r=mid;
    }
    return l;
}
