#include "FileReplace.hpp"


FileReplace::FileReplace(){

}
FileReplace::FileReplace(std::string filename){

	this->filename = filename;
}
FileReplace::~FileReplace(){}

void	FileReplace::replace(std::string s1,std::string s2)
{
	std::string tmp;
	std::string data;
	int i  = 0;
	int j = 0;
	long a;
	std::ifstream mert(this->filename);
	if (!mert.good())
	{
		std::cout << "Error: Not found\n";
		return ;
	}
	else
	{
		std::ofstream newfile(this->filename + ".replace");
		while (std::getline(mert, data))
		{
			j = data.find(s1);
			a = std::string::npos;
			i = 0;

			if(j != a)
			{
				while(j != a){
					if (i < j){
						tmp += data[i];
						i++;
					}
					else if (i == j){
						tmp += s2;
						i += s1.length();
					}
					j = data.find(s1, i);// s1i i.ci indexten sonra ara;
					if (j == a){
						tmp += data.substr(i, data.length());
						i = 0;
						tmp += '\n';
						newfile << tmp;
						tmp = "";
					}
				}
			}
			else{
				newfile << data;
				if(!mert.eof())
					newfile << '\n';
			}
				
		}			
		}
	
}

void FileReplace::setfilename(std::string name)
{
	this->filename = name;
}