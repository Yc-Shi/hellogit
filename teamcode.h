#include<iostream>
#include<string>
class Basketball
{
	private:
		int points;
		string player;
	public:
		Basketball(int s, string l)
		{
			points = s;
			player = l;
		}
	int getpoints()
	{
		return points;
	}
	
	void setpoints(int s)
	{
		points = s;
	}
	string getplayer()
	{
		return player;
	}
	void setplayer(string l)
	{
		player = l;
	}
};

