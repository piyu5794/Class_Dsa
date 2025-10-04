class Solution {
    public int findPeakElement(int[] nums) {
        int n= nums.length;
        int l=0;
        int h=n-1;
        if(n==1) return 0;

        while(l<h){
           
            int mid =(l+h)/2;
            //if(nums[mid] >nums[mid-1] && nums[mid] >nums[mid+1]) return mid;
            if(nums[mid] >nums[mid+1]) h= mid;

            else l=mid+1;
        }
        return l;
    }
}
