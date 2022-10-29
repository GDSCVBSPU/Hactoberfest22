  class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[],int l,int h,int mid){
        int n=mid-l+1;
        int m=h-mid;
        long arr1[n];
        long arr2[m];
        long long int count=0;
        for(int i=0;i<n;i++){
            arr1[i]=arr[l+i];
        }
        for(int i=0;i<m;i++){
            arr2[i]=arr[mid+i+1];
        }
        int k=l;
        int i=0,j=0;
        while(i<n && j<m){
            if(arr1[i]>arr2[j]){
                arr[k]=arr2[j];
                count+=n-i;
                k++;
                j++;
            }
            else{
                arr[k]=arr1[i];
                k++;
                i++;
            }
           
        }
        while(i<n){
            arr[k]=arr1[i];
            k++;
            i++;
        }
        while(j<m){
            arr[k]=arr2[j];
            k++;
            j++;
        }
        return count;
        
    }
    long long int  solve(long long  l,int h,long long arr[]){
        long long int count =0;
        if(l<h){
            int mid=(h+l)/2;
            count+=solve(l,mid,arr);
            count+=solve(mid+1,h,arr);
            count+=merge(arr,l,h,mid);
        }
        return count;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return solve(0,N-1,arr);
    }

};