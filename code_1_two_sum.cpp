/**
 * @brief LeetCode Problem 1: Two Sum - Find two numbers that add up to a target.
 * @author ZhaoRongBo
 * @date 2025-06-25
 * @version 1.0
 */
#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief A class to solve the classic Two Sum problem using brute-force approach.
 */
class TwoSum {
public:
    /**
     * @brief Finds two distinct elements whose sum equals the target value.
     * @param nums A vector of integers (input array)
     * @param target The desired sum of two elements
     * @return A vector containing the indices of the two elements, or empty if none found.
     */
    static vector<int> twoSum(const vector<int>& nums, const int target) {
        for (int i = 0; i < nums.size() - 1; i++)
            for (int j = 1 + i; j < nums.size(); j++)
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
        return {};
    }
};

int main() {
    const vector nums = {2, 5, 5, 11};
    constexpr int target = 10;
    const vector<int> result = TwoSum::twoSum(nums, target);
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    return 0;
}