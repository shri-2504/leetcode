class Solution {
    public int[] productExceptSelf(int[] nums) 
    {
        int[] arr = new int[nums.length];
        int prepro=1;
        int postpro=1;
        
        for(int i =0; i<nums.length; i++)
        {
            arr[i]=prepro;
            prepro*=nums[i];
        }
        for(int i=nums.length-1; i>=0; i--)
        {
            arr[i]*=postpro;
            postpro*=nums[i];
        }
        return arr;
    }
}