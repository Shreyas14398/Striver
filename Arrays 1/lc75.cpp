class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i, start = 0, mid = 0, last = nums.size() - 1;
        while (mid <= last)
        {
            switch (nums[mid])
            {
            case 0:
                swap(nums[start++], nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid], nums[last--]);
                break;
            }
        }
        cout << '[';
        for (i = 0; i < nums.size() - 1; i++)
            cout << nums[i] << ',';
        cout << nums[i] << ']';
    }
};