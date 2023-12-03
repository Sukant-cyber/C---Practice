#include <iostream>
#include <vector>

void sortColors(std::vector<int>& nums) {
    int low = 0;        // Pointer to the region of 0s
    int high = nums.size() - 1; // Pointer to the region of 2s
    int i = 0;          // Pointer to traverse the array

    while (i <= high) {
        if (nums[i] == 0) {
            // If the element is 0, swap it with the element at 'low'
            std::swap(nums[i], nums[low]);
            i++;
            low++;
        } else if (nums[i] == 2) {
            // If the element is 2, swap it with the element at 'high'
            std::swap(nums[i], nums[high]);
            high--;
        } else {
            // If the element is 1, just move to the next element
            i++;
        }
    }
}

int main() {
    // Example usage:
    std::vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);

    // Print the sorted array
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
