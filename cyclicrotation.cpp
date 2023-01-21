//https://app.codility.com/programmers/lessons/2-arrays/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int>& A, int K)
{
    if (K <= 0 || K > 100 || A.size() == 1 || A.empty())
    {
        return A;
    }

    K = K % A.size();

    rotate(A.rbegin(), A.rbegin() + K, A.rend());

    return A;
}


int main()
{
    vector<int> A = {8,5,5};
    int K = 150;
    
    solution(A, K);

    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << endl;
    }

}