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

	//Make all animatronics as variables
	std::string Bonnie = "No Room";
	std::string Chica = "No Room";
	std::string The_Cupcake = "No Room";
	std::string Foxy = "No Room";
	std::string Freddy = "No Room";
	std::string Golden_Freddy = "No Room";

	//Start Game Logic
	std::string StartGame = "False";
	std::cout << "Start Game?" << std::endl;
	std::cin >> StartGame;
	if (StartGame == "Y") {
		StartGame = "True";
		//Clear Screen & Set StartGame To True
		system("cls");
	}
	if (StartGame == "y") {
		StartGame = "True";
		//Clear Screen & Set StartGame To True. AINT DOING A TON OF CODE FOR IT TO BE ONE LINE.
		system("cls");
	}
	//Set all animatronics to their usual areas
	Bonnie = "Show Stage";
	Freddy = "Show Stage";
	Chica = "Show Stage";
	Foxy = "Pirate Cove";

	//Set all rooms with their corresponding animatronics
	Show_Stage = Bonnie, Freddy, Chica;
	Pirate_Cove = Foxy;

	//Basic Setup
	if (StartGame == "True") {
		std::string Current_Veiw = "Office";
		std::cout << "Currently viewing: " << Current_Veiw << std::endl;
		std::string Set_Room;
		std::cout << "Go to what room:";
		std::cin >> Set_Room;
	}
}
