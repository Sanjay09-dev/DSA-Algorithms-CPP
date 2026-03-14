vector<int> prefixSum(vector<int>& arr){
    vector<int> pre(arr.size());
    pre[0]=arr[0];
    for(int i=1;i<arr.size();i++)
        pre[i]=pre[i-1]+arr[i];
    return pre;
}
