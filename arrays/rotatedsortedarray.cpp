class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int st = 0, end = nums.size() - 1;
          while (st <= end)
        {
            int mid = st + (end - st)/2;
            
            if (nums[mid] == tar)
            {
               return mid;
            }

            if (nums[st] <= nums[mid]) //ascending
            {
                if (nums[st] <= tar && tar <= nums[mid]) //left sorted
                {
                  end = mid - 1;
                }
                 else //right sorted
                 {
                    st =mid + 1;
                 }

            } 

            else 
            {
                if (nums[end] <= tar && tar <= nums[mid]) //right sorted
                {
                  st = mid + 1;
                }
                else //left sorted
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
    
};
