#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int> &nums)
{
    int k{1};
    for (size_t i = 1; i < nums.size(); ++i)
        if (nums[i] != nums[i - 1])
            nums[k++] = nums[i];
    return k;
}

int main()
{
    std::vector <int> a{0,0,1,1,1,2,2,3,3,4,4};
    int j = removeDuplicates(a);
    for (auto i = 0; i < j; i++)
        std::cout<<a.at(i)<<" ";
}