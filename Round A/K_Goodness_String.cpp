#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int t_sum = 1;

    cin >> t;

    while(t--)
    {
        int n, k;
        int sum = 0;
        string s;

        cin >> n >> k;
        cin >> s;

        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                sum++;
            }
        }

        if (sum <= k)
            printf("Case #%d: %d\n", t_sum, k - sum);

        else
            printf("Case #%d: %d\n", t_sum, 0);

        t_sum++;
    }
}