#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){};


PmergeMe::~PmergeMe(){};


PmergeMe::PmergeMe(PmergeMe& obj)
{
	*this = obj;
}


PmergeMe& PmergeMe::operator=(PmergeMe const& obj)
{
	(void)obj;
	return *this;
}


void PmergeMe::mergesrt(std::vector<int>  &ag)
{
	std::vector<int> left;
	std::vector<int> right;
	if(ag.size() > 5)
	{
		size_t ort = ag.size() / 2;
		for(size_t i = 0 ; i < ort;i++)
			left.push_back(ag[i]);
		for(; ort < ag.size(); ort++)
			right.push_back(ag[ort]);
		mergesrt(left);
		mergesrt(right);
	}
	else
		this->main.push_back(ag);
}
void PmergeMe::deparse(std::deque<int> &ag)
{
	std::deque<int> left;
	std::deque<int> right;
	if(ag.size() > 5)
	{
		size_t ort = ag.size() / 2;
		for(size_t i = 0 ; i < ort;i++)
			left.push_back(ag[i]);
		for(; ort < ag.size(); ort++)
			right.push_back(ag[ort]);
		deparse(left);
		deparse(right);
	}
	else
		this->main2.push_back(ag);
}



void PmergeMe::insortvec(std::vector<int> &ag)
{
	int size = ag.size();
	int i = 0;
	int tmp;
	int flag = 0;
	if(size > 1)
	{
		while(i < size - 1)
		{
			if(ag[i] > ag[i + 1])
			{
				tmp = ag[i];
				ag[i] = ag[i + 1];
				ag[i + 1] = tmp;
				flag = 1;
			}
			else if (flag == 1)
			{
				if(i != 0)
					i--;
				flag = 0;
			}
			else
				i++;
		}
	}
}
void PmergeMe::insortdeq(std::deque<int> &ag)
{
	int size = ag.size();
	int i = 0;
	int tmp;
	int flag = 0;
	if(size > 1)
	{
		while(i < size - 1)
		{
			if(ag[i] > ag[i + 1])
			{
				tmp = ag[i];
				ag[i] = ag[i + 1];
				ag[i + 1] = tmp;
				flag = 1;
			}
			else if (flag == 1)
			{
				if(i != 0)
					i--;
				flag = 0;
			}
			else
				i++;
		}
	}
}

