#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int participatants[n];
    for (int i = 0; i < n; i++)
    {
        cin >> participatants[i];
    }
    int adv_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (participatants[i] >= participatants[k - 1] && participatants[i] > 0)
        {
            adv_cnt++;
        }
    }
    cout << adv_cnt << endl;
    return 0;
}