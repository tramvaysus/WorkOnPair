#include <iostream>
#include <vector>
#include "test.h"

std::vector<int> create_vec(int amount)
{
	std::vector <int> nums;
	nums.push_back(1);
	nums.push_back(nums[0] * 2);
	nums.push_back(nums[1] * 2);
	nums.push_back(nums[2] * 2);
	nums.push_back(nums[3] * 2);
	nums.push_back(22);
	return std::vector<int>(nums);
}

int main()
{
	setlocale(0, "");
	test::test_some_func(create_vec);
	return 0;
}
