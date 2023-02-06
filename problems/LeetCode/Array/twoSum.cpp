/*
Two sum problem leetcode
Submitted 2-10-2022
Memory : 10.6
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> t;
     for(int i=0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    t.push_back(i);
                    t.push_back(j);
                    break;
                }
            }
     }
    return t; 
    }
};

/*
-> if we start i = 0 and j = 1 then all the testcase will not be pass
    but
-> if we start i=0 and j = i + 1 then all the test case will be pass

Time complexity is O(n^2)

*/

/*
Follow-up: 
Can you come up with an algorithm that is less than O(n2) time complexity?
*/