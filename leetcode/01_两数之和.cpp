#include<iostream>
#include<vector>

class Solution 
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) 
    {
        int n = nums.size();
        std::vector<int> v;
        for(int i = 0;i < n - 1;i++)
        {
            for(int j = i + 1;j < n;j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    v.push_back(i);
                    v.push_back(j);
                } 
            }
        }
        return v;
    }
};
/*给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出和为目标值 target  的那两个整数，并返回它们的数组下标。
你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。
你可以按任意顺序返回答案。*/
int main()
{
    std::vector<int> nums{2,7,15,16};
    int target = 9;

    // std::cout << sizeof(nums) / sizeof(nums[0]) << std::endl;
    Solution s;
    std::vector<int>v = s.twoSum(nums,target);
    for(std::vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}