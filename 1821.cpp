#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/*
 Ans[N, K] = max(A[N-1, K-1] * a(n-1, n), A[N-2, K-1] * a(n-2, n), ...., A[K, K-1] * a(k, n))

limitation: atoi may overflow

*/

int main()
{
    int N, K;
    string digits;
    cin >> N >> K;
    cin >> digits;

    // use Ctrl + D to exit
    // cout <<  N << " " << K << " " << digits;
    int ans[40][7] = {0};

    // init when k = 0
    for (int i = 0; i < N; i++)
    {
        ans[i][0] = atoi(digits.substr(0, i + 1).c_str());
    }

    for (int ki = 1; ki < K + 1; ki++)
    {
        for (int i = 0; i < N; i++)
        {
            int max = -1;
            for (int j = i - 1; j >= ki - 1; j--)
            {
                int tmp = ans[j][ki - 1] * atoi(digits.substr(j + 1, i - j).c_str());
                if (tmp > max)
                {
                    max = tmp;
                }
            }

            ans[i][ki] = max;
        }
    }

     cout << ans[N-1][K];
}