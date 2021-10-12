#include "FileManager.hpp"


//MARK: Class Methods (static)

std::string	FileManager::getFileContent( std::string filename )
{
	std::fstream	file;
	std::string		line;
	std::string		fileContent;

	file.open(filename, std::fstream::in);
	if (!file)
	{
		std::cout << "Error: can't open file " << filename << std::endl;
		exit(1);
	}
	while (file)
	{
		getline(file, line);
		fileContent += line + '\n';
	}
	fileContent.pop_back();
	file.close();
	return (fileContent);
}

void	FileManager::replace( std::string filename, std::string s1, std::string s2 )
{
	size_t			position = 0;
	std::string		newFilename;
	std::fstream	newFile;
	std::string		fileContent;

	fileContent = getFileContent(filename);
	while ((position = fileContent.find(s1)) != std::string::npos)
	{
		fileContent.erase(position, s1.length());
		fileContent.insert(position, s2);
	}
	for (size_t i = 0; i < filename.length(); i++)
		newFilename += toupper(filename[i]);
	newFilename += ".replace";
	newFile.open(newFilename, std::fstream::out);
	newFile << fileContent;
	newFile.close();
}
