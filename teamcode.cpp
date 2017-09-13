#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<Basketball> stats = {{2,"Bob"},{10,"Chris"},{1,"Akanni"},{5000,"Shaheem"}};
	
	for (auto team:stats)
	{
		cout << team.getpoints()<<""<<team.getplayer()<<endl;
	}
	cout<< endl;
}
