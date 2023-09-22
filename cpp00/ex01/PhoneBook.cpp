#include   "PhoneBook.hpp"

int c_i(std::string str)
{
	int i = 0;
	PhoneBook a;
	int len = str.length();
	while(isdigit(str[i]))
		i++;
	if(len == i)
		a.flag = 1;
	else 
		a.flag = 0;

	return (a.flag);
}

std::string trimLongString(std::string str)
{
	std::string ret = "          ";
	int i = 0;
	int j = 9;
	while(str[i])
		i++;
	if(i > 10){
		ret[j] = '.';
		j--;
		while(0 <= j){
			ret[j] = str[j];
			j--;
		}
	}
	else{
		i--;
		while(0 <= i){
			ret[j] = str[i];
			i--;
			j--;
		}
	}
	return ret;
}

bool isAllSpace(std::string str){
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
			return (false);
	}
	return (true);
}

std::string getInput(std::string message){
	std::string res;
	std::cout << message << ":";
	getline(std::cin, res);
	if (!std::cin.good())
			exit(1);
	if (res.empty() || isAllSpace(res))
		res = getInput(message);
	return (res);
}

void PhoneBook::ADD()
{
    std::string str;
    for(int j=0; j < 5;j++)
    { 
        if(j  == 0){
            contacts[this->i%8].setFirstN(getInput("first name  ->"));
        }
        else if(j == 1 ){
			contacts[this->i%8].setlastN(getInput("lastname    -> "));
        }
        else if(j == 2 ){
			contacts[this->i%8].setnickN(getInput("setnicks   -> "));
        }
        else if(j  == 3 ){
			while(1){
             	std::cout<<"setphoneN   ->"; 
				getline(std::cin, str);
				if (!std::cin.good())
					exit(1);
				this->flag = c_i(str);
				if(this->flag == 1){
					contacts[this->i%8].setphoneN(str);
					break;
				}
			}
         }
        else if(j  == 4 ){
			contacts[this->i%8].setdarkestS(getInput("setdarkest   ->"));
        }
    }
    PhoneBook::i++;
}


void PhoneBook::SEARCH()
{
    int j;
    std::string str;
	std::cout << "-----------------CONTACT LIST----------------\n";
	std::cout << "|  INDEX   | FIRST N. |  LAST N. | NICKNAME |\n";

	for(j = 0; j < this->i && j < 8; j++)
	{
		if(this->i != 0)
		{
			std::cout << "|" << std::right << std::setw(10) << j;
		std::cout << "|" << std::right << std::setw(10) << trimLongString(this->contacts[j % 8].getFirstN());
		std::cout << "|" << std::right << std::setw(10) << trimLongString(this->contacts[j % 8].getlastN());
		std::cout << "|" << std::right << std::setw(10) << trimLongString(this->contacts[j % 8].getnickN()) <<  "|" << "\n";
		}
	}
    while(str == "")
    {
        getline(std::cin, str);
        if(!(std::cin.good()))
            exit(31);
    }
    j = str[0] - 48;
    if(j >= 0 && j < 8)
    {
        std::cout << contacts[j].getFirstN();
		std::cout << "   ";
        std::cout << contacts[j].getlastN();
		std::cout << "   ";
        std::cout << contacts[j].getnickN();
		std::cout << "   ";
        std::cout << contacts[j].getphoneN();
		std::cout << "   ";
		std::cout << contacts[j].getdarkestS()<<std::endl;
		j++;
    }
}


