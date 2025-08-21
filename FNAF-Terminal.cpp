#include <iostream>
#include <string>

int main() {
	//Set all rooms as variables
	std::string Show_Stage = "None";
	std::string Kitchen = "None";
	std::string Pirate_Cove = "None";
	std::string Restrooms = "None";
	std::string Dining_Area = "None";
	std::string West_Hall = "None";
	std::string East_Hall = "None";
	std::string West_Hall_Corner = "None";
	std::string East_Hall_Corner = "None";
	std::string Backstage = "None";
	std::string Supply_Closet = "None";
	std::string Right_Office_Door = "None";
	std::string Left_Office_Door = "None";

	//Start Game Logic
	std::string StartGame = "False";
	std::cout << "Start Game?" << std::endl;
	std::cin >> StartGame;
	if (StartGame == "Y") {
		StartGame = "True";
		//Clear Screen & Start Game
		system("cls");
	}
	if (StartGame == "y") {
		//Clear Screen & Start Game. AINT DOING A TON OF CODE FOR IT TO BE ONE LINE.
		system("cls");
	}
}
