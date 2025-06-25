/**
 * @file code_1_two_num.cpp
 * @brief LeetCode Problem 1: Two Sum - Find two numbers that add up to a target. 力扣题目1：两数之和——找出和为目标值的两个数。
 * @author ZhaoRongBo
 * @date 2025-06-25
 * @version 1.0
 */
#include <iostream>
#include <vector>
using namespace std;

/**
 * @class TwoSum
 * @brief A class to solve the classic Two Sum problem using brute-force approach. 使用暴力解法解决经典的两数之和问题的类。
 */
class TwoSum {
public:
    /**
     * @brief Finds two distinct elements whose sum equals the target value. 寻找两个不同的元素，其和等于目标值。
     * @param nums A vector of integers (input array) 整数向量（输入数组）
     * @param target The desired sum of two elements 所期望的两个元素的和
     * @return A vector containing the indices of the two elements, or empty if none found. 包含两个元素下标的向量，如果没有找到则返回空。
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

/**
 * @brief Main function to test the TwoSum class. 测试 TwoSum 类的主函数。
 * @return 0 if the program executes successfully. 程序成功执行则返回 0。
 */
int main() {
    const vector nums = {2, 5, 5, 11};
    constexpr int target = 10;
    const vector<int> result = TwoSum::twoSum(nums, target);
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    return 0;
}