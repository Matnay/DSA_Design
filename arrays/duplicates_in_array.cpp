#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        std::vector<int> duplicates;
        int size_c = nums.size();
        for (int i = 0; i < size_c; i++)
        {
            if (nums[abs(nums[i]) - 1] < 0)
            {
                duplicates.push_back(abs(nums[i]));
            }

            // Use in place multiplication with negative number to mark duplicate numbers
            nums[abs(nums[i]) - 1] *= -1;
        }
        return duplicates;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans;

    ans = sol.findDuplicates(nums);

    for (auto num : ans)
        cout << num << endl;
}