#ifndef FILEMANAGER_H
# define FILEMANAGER_H

# include <iostream>
# include <fstream>

class FileManager
{
	private:
		static std::string	getFileContent( std::string filename );

	public:
		static void	replace( std::string filename, std::string s1, std::string s2 );
};

#endif
