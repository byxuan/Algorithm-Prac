#pragma once

/*
Given an array of 2n integers, your task is to group these integers into n pairs of integer, say (a1, b1), (a2, b2), ..., (an, bn) 
which makes sum of min(ai, bi) for all i from 1 to n as large as possible.

Example:
Input: [1,4,3,2]
Output: 4
Explanation: n is 2, and the maximum sum of pairs is 4 = min(1, 2) + min(3, 4).

Analysis:
if the array is [2,3,1,4,6,5], firstly make the order 1, 2, 3, 4, 5, 6, and what we need is the sum of 1, 3, 5.
*/

#include <algorithm>						//include sort()
#include <functional>						//include compare function like greater<type>(), less<type>().

class Solution
{
public:
	int arrayPairSum(int nums[]) {
		sort(nums,nums+sizeof(nums); //the order is increase in default
		int result = 0;
		for (int i = 0; i < nums.length; i += 2)
			result += nums[i];
	}
	return 0;
};