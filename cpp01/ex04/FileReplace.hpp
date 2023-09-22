#pragma once
#include <iostream>
#include <fstream>
#include <filesystem>


class FileReplace
{
private:
	std::string filename;
public:
	FileReplace();
	FileReplace(std::string filename);
	~FileReplace();
	void replace(std::string s1,std::string s2);
	void setfilename(std::string name); 
};