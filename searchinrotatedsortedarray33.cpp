class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0, end=nums.size()-1,mid;

        while(st<=end){
                mid=st+((end-st)/2);
                if (target==nums[mid]){
                    return mid;
                }
                if(nums[st]<=nums[mid]){//left sorted
                    if(nums[st]<=target && target<=nums[mid]){
                            end=mid-1;
                    }
                    else{
                        st=mid+1;
                    }

                }
                else{ //right sorted
                    if(nums[mid+1]<target && target<=nums[end]){
                        st=mid+1;
                    }
                    else{
                        end=mid-1;
                    }
                }
                



        }
        return -1;
    }
};