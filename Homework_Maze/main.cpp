#include <iostream>
#include <fstream>
#include <stack>
#include <string>

using namespace std;

struct Position
{
	int Cur_X;
	int Cur_Y;
};

struct Position Location;
struct Position* ptr = &Location;

stack <int> Location;

int main() 
{	
	ifstream MapFile("Level01.txt");

	
	while (MapFile.peek() != EOF)
	{
		char Buffer[1024] = { 0, };
		MapFile.getline(Buffer, 1024);
		
		cout << Buffer << endl;
	}
	void Search();

	
	Location.Cur_X = 1;

	MapFile.close();

	
	return 0;
}



void Search()
{
	int Array[10][10];
	int CurrentX = 1;
	int CurrentY = 1;

	if (Array[CurrentX][CurrentY - 1] == 0)
	{
		Array[CurrentX][CurrentY] = Array[CurrentX][CurrentY - 1];
		Array[CurrentX][CurrentY - 1] = 8;
		Location.Cur_X = CurrentX;
		Location.Cur_Y = CurrentY;
	}
	else if (Array[CurrentX + 1][CurrentY] == 0)
	{
		Array[CurrentX][CurrentY] = Array[CurrentX + 1][CurrentY];
		Array[CurrentX][CurrentY - 1] = 8;
		Location.Cur_X = CurrentX;
		Location.Cur_Y = CurrentY;
	}
	else if (Array[CurrentX][CurrentY + 1] == 0)
	{
		Array[CurrentX][CurrentY] = Array[CurrentX][CurrentY + 1];
		Array[CurrentX][CurrentY - 1] = 8;
		Location.Cur_X = CurrentX;
		Location.Cur_Y = CurrentY;
	}
	else if (Array[CurrentX - 1][CurrentY] == 0)
	{
		Array[CurrentX][CurrentY] = Array[CurrentX + 1][CurrentY];
		Array[CurrentX][CurrentY - 1] = 8;
		Location.Cur_X = CurrentX;
		Location.Cur_Y = CurrentY;
	}
	else
	{
		Array[CurrentX][CurrentY] = Array[CurrentX][CurrentY];
	}
}

	