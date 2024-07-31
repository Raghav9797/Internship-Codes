/*#include <iostream>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums) int maxSum
    {
        for (i = 0; i < nums.size(); i++)
        {
        }
    }
};*/

/*class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = nums[0];

        for (int i = 1; i <=nums.size(); i++)
        {
            if (currentSum<0){
            currentSum=0;
            }
            currentSum=currentSum+nums[1];
            if(currentSum>maxSum)
            {
                maxSum=currentSum;
            }
        }

    return maxSum;
    }
};


#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // deque means you can perform push and pop operation from both end.
    deque<int> d;
    // Insertion
    d.push_back(10);
    d.push_front(11);
    for (int i : d)
    {
        cout << i << " ";
    } // delete
    d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }
    // delete from front
    d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "fron:t " << d.front() << endl;
    cout << "back: " << d.back() << endl;
    cout << "Empty of not: " << d.empty() << endl;
    cout << "before erase: " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase: " << d.size() << endl;
    return 0;
}*/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_front(12);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout
        << "after erase " << endl;
    for (int i : l)
    {
        cout << " ";
    }
    cout << "size of list " << l.size() << endl;

    return 0;
}
