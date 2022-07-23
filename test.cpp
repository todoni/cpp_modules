#include <iostream>

class Object
{
protected:
	int xpos, ypos;
public:
	virtual void Move(int x, int y) = 0;
	void Trade(void);
};

class Player : public Object
{
private:
	int hp;
public:
	virtual void	Move(int x, int y)
	{
		std::cout << "Player Move" << std::endl;
	}
	void	Trade(void);
};

class Monster : public Object
{
	public:
	//virtual void	Move(int x, int y)
	//{
//		std::cout << "Monster Move" << std::endl;
//	}
};

int	main(void)
{

	int		k = 42;
	int	*ptr = &k;

	Object	*obj[3];
	//Object asdf;

	//obj[0] = new Monster();
	//obj[1] = new Monster();
	obj[2] = new Player();
	//obj[2]->Trade();
		obj[2]->Move(1, 2);
	return (0);	
}
