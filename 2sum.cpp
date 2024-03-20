#include <iostream>
using namespace std;

pair<int, int> sum(int nums[4], int trg)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (nums[i] + nums[j] == trg)
            {
                return {i, j};
            }
        }
    }
    return {};
}

int main()
{
    int nums[4] = {2, 7, 11, 15};
    int trg;

    cout << "Enter the target ";
    cin >> trg;

    pair<int,int> result = sum(nums, trg);
    cout<< result.first<<result.second;

    return 0;

}