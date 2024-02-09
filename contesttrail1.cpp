#include <iostream>

using namespace std;

const int N = 100;

long long a[N];

int main()
{
	int t;
	int n;
	int i;
	long long mn;
	long long ans;

	cin >> t;
	while(t --)
	{
		cin >> n;
		for(i = 1; i <= n; i ++)
			cin >> a[i];

		for(i = 1, mn = 1e7; i <= n; i ++)
			mn = min(mn, a[i]);
		for(i = 1, ans = 0; i <= n; i ++)
			ans += a[i] - mn;

		cout << ans << endl;
	}

	return 0;
}
