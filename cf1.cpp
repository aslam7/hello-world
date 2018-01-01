#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int c=0;
	for(int i=0;i<s.size();i++)
	{
		char ch=s[i];
		if(ch=='1' || ch=='3' || ch=='5' || ch=='7' || ch=='9' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			c++;
	}	
	cout << c << endl;
	return 0;
}