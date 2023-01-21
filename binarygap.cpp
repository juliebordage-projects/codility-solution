#include <iostream>
#include <bitset>

using namespace std;

int solution(int N)
{
    int currentGap = 0;
    int maxGap = 0;

    bool foundOne = false;

    if (N > 0 && N < 2147483648);
    {
        bitset<32> bit(N);
        cout << bit << endl;
        for (int i = 0; i < bit.size(); i++)
        {
            if (bit[i] == 1 && foundOne == true)
            {
                if (bit[i + 1] == 1)
                {
                    foundOne = false;
                }

                if (maxGap < currentGap)
                {
                    maxGap = currentGap;
                }
                currentGap = 0;
            }
            else if (bit[i] == 1 && foundOne == false)
            {
                if (bit[i + 1] == 0)
                {
                    foundOne = true;
                }
            }
            else if (bit[i] == 0 && foundOne == true)
            {
                currentGap++;
            }
        }
    }
    return maxGap;
}

int main()
{
    cout << solution(74901729) << endl;
}