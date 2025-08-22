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
	Golden_Freddy = "Hidden :o";

	//Set all rooms with their corresponding animatronics
	Show_Stage = "Bonnie, Chica, Freddy";
	Kitchen = "None";
	Pirate_Cove = "Foxy";
	Restrooms = "None";
	Dining_Area = "None";
	West_Hall = "None";
	East_Hall = "None";
	West_Hall_Corner = "None";
	East_Hall_Corner = "None";
	Backstage = "None";
	Supply_Closet = "None";
	Right_Office_Door = "Right Door: None ";
	Left_Office_Door = "Left Door: None";

	//Basic Setup
	std::string Current_View;
	std::string Current_Animatronics;
	Current_Animatronics = "None";
	Current_View = "Office";
	if (StartGame == "True") {
		std::string Set_Room;

		//Choose Room Functionallity
		while (true) {
			//Not explaining all this ToT
			if (Set_Room == "Show Stage") {
				Current_Animatronics = Show_Stage;
			}
			else if (Set_Room == "Kitchen") {
				Current_Animatronics = Kitchen;
			}
			else if (Set_Room == "Pirate Cove") {
				Current_Animatronics = Pirate_Cove;
			}
			else if (Set_Room == "Restrooms") {
				Current_Animatronics = Restrooms;
			}
			else if (Set_Room == "Dining Area") {
				Current_Animatronics = Dining_Area;
			}
			else if (Set_Room == "West Hall") {
				Current_Animatronics = West_Hall;
			}
			else if (Set_Room == "East Hall") {
				Current_Animatronics = East_Hall;
			}
			else if (Set_Room == "West Hall Corner") {
				Current_Animatronics = West_Hall_Corner;
			}
			else if (Set_Room == "East Hall Corner") {
				Current_Animatronics = West_Hall_Corner;
			}
			else if (Set_Room == "Backstage") {
				Current_Animatronics = Backstage;
			}
			else if (Set_Room == "Supply Closet") {
				Current_Animatronics = Supply_Closet;
			}
			else if (Set_Room == "Office") {
				Current_Animatronics = Right_Office_Door + Left_Office_Door;
			}
			std::cout << "Animatronics in room: " << Current_Animatronics << std::endl;
			std::cout << "Currently viewing: " << Current_View << std::endl;
			std::cout << "Go to what room: ";
			std::cin >> Set_Room;
			system("cls");
			//View Kitchen
			if (Set_Room == "kitchen") {
				Set_Room = "Kitchen";
				Current_View = "Kitchen";
			}
			//View Show Stage
			if (Set_Room == "stage") {
				Set_Room = "Show Stage";
				Current_View = "Show Stage";
			}
			//View Pirate Cove
			if (Set_Room == "cove") {
				Set_Room = "Pirate Cove";
				Current_View = "Pirate Cove";
			}
			//View Restrooms
			if (Set_Room == "restroom") {
				Set_Room = "Restrooms";
				Current_View = "Restrooms";
			}
			//View Dining Area
			if (Set_Room == "dining") {
				Set_Room = "Dining Area";
				Current_View = "Dining Area";
			}
			//View West Hall
			if (Set_Room == "westhall") {
				Set_Room = "West Hall";
				Current_View = "West Hall";
			}
			//View East Hall
			if (Set_Room == "easthall") {
				Set_Room = "East Hall";
				Current_View = "East Hall";
			}
			//View West Hall Corner
			if (Set_Room == "westcorner") {
				Set_Room = "West Hall Corner";
				Current_View = "West Hall Corner";
			}
			//View East Hall Corner
			if (Set_Room == "eastcorner") {
				Set_Room = "East Hall Corner";
				Current_View = "East Hall Corner";
			}
			//View Backstage
			if (Set_Room == "backstage") {
				Set_Room = "Backstage";
				Current_View = "Backstage";
			}
			//View Supply Closet
			if (Set_Room == "supply") {
				Set_Room = "Supply Closet";
				Current_View = "Supply Closet";
			}
			//View Office
			if (Set_Room == "office") {
				Set_Room = "Office";
				Current_View = "Office";
			}
		}
	}
}
