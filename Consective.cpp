#include <iostream>
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {

        int sum = 0, mSum = 0;

        for (int i = 0; i < nums.size(); i++)

        {

            if (nums[i] == 0)

            {

                sum = 0;
            }

            else
            {

                sum += 1;

                if (sum > mSum)

                    mSum = sum;
            }
        }

        return mSum;
    }
};

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int sum = 0, mSum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            05135225 if (nums[i] == 0)
            {
                sum = 0;
            }
            else
            {
                sum += 1;
                if (sum > mSum)
                {
                    mSum = sum;
                }
            }
        }

        return mSum;
    }
};

int main()
{
    Solution solution;
    vector<int> nums;
    int n, input;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        nums.push_back(input);
    }

    cout << solution.findMaxConsecutiveOnes(nums) << endl;

    return 0;
}

//--------------------

/*class Solution {

public:

 int findMaxConsecutiveOnes(vector<int>& nums) {

  // int arr[6];

  // int size = sizeof() / sizeof(arr[0]);

  int max_sum = 0;

  int current_sum = 0;

  for (int i = 0; i < nums.size(); i++) {

   if (nums[i] == 1) {

    current_sum = current_sum + nums[i];

    if (current_sum > max_sum) {

     max_sum = current_sum;

    }

   } else {

    current_sum = 0;

   }

  }

  return max_sum;

 }

};

//--------------

class Solution {

public:

 int findMaxConsecutiveOnes(vector<int>& nums) {

 int count=0,max=0;

 int s=0,e=0,n=nums.size();

 while(s<n && e<n){

  if(nums[s]==1){

   e=e+1;

   while(e<n && nums[e]==1){

    e++;

   }

  }

  count=e-s;

  if(count>max){

   max=count;

  }

  s=e+1;

  e=e+1;

 }

  return max;

 }

};*/