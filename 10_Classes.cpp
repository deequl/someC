#include <iostream>

class Player
{
public:
	int x, y;
	int speed;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};



int classes()
{
	Player player;

	player.Move(5, 2);

	std::cin.get();
	return 1;
}