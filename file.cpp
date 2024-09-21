#include <iostream>
#include <fstream>

// get file path
std::string getFilePath()
{
	std::cout << "This is an implementation of ppm Image Format." << '\n';
	std::cout << "Paste your filepath where the Image to be saved!" << '\n';
	std::cout << "Example:" << '\n';
	std::cout << "C:/Users/Name/imageName.ppm" << '\n';
	std::cout << '\n';
	std::cout << "paste/type your filepath along with filename and extension(.ppm):";
	std::string filepath{};
	std::cin >> filepath;

	return filepath;
}
