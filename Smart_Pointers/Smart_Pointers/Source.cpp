#include <iostream>
#include <string>
#include <memory>

class Player
{
public:
	Player()
	{
		std::cout << "Created Player!" << std::endl;
	}

	~Player()
	{
		std::cout << "Destroyed Player!" << std::endl;
	}

	void Print() { std::cout << "==============\n"; }
};

int main()
{
	{
		std::shared_ptr<Player> p0;
		{
			std::unique_ptr<Player> player = std::make_unique<Player>();
			player->Print();
		}

		{
			std::shared_ptr<Player> sharedPlayer = std::make_shared<Player>();
			// Notice that the destructor for sharedPointer doesn't get activated even when the pointer goes out of scope
			// this is due to the fact that the address pointed to by sharedPlayer is assigned to p0...
			p0 = sharedPlayer;

			{
				// this copies the shared pointer to another pointer but does not increase the reference count
				// because there is no reference count, sharedPlayer WILL GET DESTROYED ONCE IT GOES OUT OF SCOPE
				std::weak_ptr<Player> weakPlayer = sharedPlayer;
			}
		}

		// ...since p0 is a shared pointer pointing to sharedPlayer, the reference count matters
		// the destructor for sharedPlayer will only get activated once there are no more references to the sharedPlayer pointer
	}

	std::cin.get();
}