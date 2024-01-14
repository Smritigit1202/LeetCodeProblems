class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int a = nums1.size();
        int b = nums2.size();
        double k=0;
        int arr[a+b];
        int i=0;
        for(i;i<a;i++)

        {
            arr[i]=nums1[i];
        }
         
        for( i=a;i<a+b;i++)

        { arr[i]=nums2[i-a];
        }
        int p= sizeof(arr)/sizeof(arr[0]);
        
sort(arr,arr+p);

       if(p%2==0)
       {
    
           k= (arr[p/2]+arr[(p/2)-1]);
          k =k/2;
       }
        else
        {
            k=arr[(p/2)];
        }    
      return k;

    }
};
