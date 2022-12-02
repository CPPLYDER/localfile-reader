#include <iostream>
#include <string>
#include <fstream>

int main(){
	std::string getFile;
	std::fstream checkFile;

	std::cout << "Enter the file name to check (.cxx): " << getFile;
	std::getline(std::cin, getFile);

	//Additional add .cxx function. Uncomment if needed
	int find_dot_cxx = getFile.find(".");
	if(!(find_dot_cxx >= 0)) {getFile.append(".cxx");}

	checkFile.open(getFile, std::ios::in);
	if (checkFile.is_open()) {
		std::cout << "\'" << getFile << "\' File found";
	}else{
		std::cout << "\'" << getFile << "\' File doesn't exist";
	}
	return 0;
}
