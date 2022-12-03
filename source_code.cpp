// Local file directory reader created by: LYDERBUG
// Formal Proeject no.1

#include <iostream>
#include <string>
#include <fstream>

int main() {
	std::string getFile;
	std::fstream checkFile;

	std::cout << "Enter the file name to check: " << getFile;
	std::getline(std::cin, getFile);

	//Adds a explicitly written file extension for 'file name only' input
	int find_dot_extension = getFile.find(".");
	if (!(find_dot_extension >= 0)) {
		getFile.append(".cpp");//change .cpp to desired file format
	}

	//Opens the local file directory where this thing is saved, and search for the input
	checkFile.open(getFile, std::ios::in);
	if (checkFile.is_open()) {
		std::cout << "\'" << getFile << "\' File found";
	}
	else {
		std::cout << "\'" << getFile << "\' File doesn't exist";
	}
	return 0;
}
