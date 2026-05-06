#include <bits/stdc++.h>
using namespace std;

// ==================== SOLUTION ====================
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        int flag = 0, mid = 0;

        while (l <= r) {
            mid = (l + r) / 2;
            if (nums[mid] == target) { flag = 0; break; }
            else if (nums[mid] > target) { r = mid - 1; flag = 1; }
            else { l = mid + 1; flag = 1; }
        }

        return (flag == 0) ? mid : l;
    }
};

// ==================== LOCAL TEST ====================
int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 6};
    cout << sol.searchInsert(nums, 5) << endl; // 2
    cout << sol.searchInsert(nums, 2) << endl; // 1
    cout << sol.searchInsert(nums, 7) << endl; // 4
    return 0;
}