#include <bits/stdc++.h>
using namespace std;
bool SubsetSumFind(int set[], int n, int sum)
{
	
	if (sum == 0)
		return true;
	if (n == 0)
		return false;

	if (set[n - 1] > sum)
		return SubsetSumFind(set, n - 1, sum);

	return (SubsetSumFind(set, n - 1, sum) || SubsetSumFind(set, n - 1, sum - set[n - 1]));
}

int main()
{
	int set[] = {45, 76, 234, 68, 5, 7, 3, 34, 4, 12, 5, 2};
	int sum = 9, n= 12;
	if (isSubsetSum(set, n, sum) == true)
		cout <<"SUbset FOund";
	else
		cout <<"Not Found sed";
	return 0;
}

