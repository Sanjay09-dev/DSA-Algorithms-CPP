int kadane(vector<int>& arr){
    int maxSum=arr[0];
    int curr=arr[0];
    for(int i=1;i<arr.size();i++){
        curr=max(arr[i],curr+arr[i]);
        maxSum=max(maxSum,curr);
    }
    return maxSum;
}
