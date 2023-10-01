#include "PmergeMe.hpp"
#include <iostream>
#include <chrono>

std::vector<int> PmergeMe::allvec(std::vector <std::vector <int> > &vec)
{
	for(size_t i = 0; i < vec.size(); i++)
		this->insortvec(this->main[i]);
	for(size_t i = 0; i < vec.size(); i++)
	{
		for(size_t j = 0; j < vec[i].size(); j++)
			all.push_back(vec[i][j]);
		if(i != 0)
			this->insortvec(this->all);
	}
	return all;
}

std::deque<int> PmergeMe::alld(std::deque <std::deque <int> > &vec)
{
	for(size_t i = 0; i < vec.size(); i++)
		this->insortdeq(this->main2[i]);
	for(size_t i = 0; i < vec.size(); i++)
	{
		for(size_t j = 0; j < vec[i].size(); j++)
			alldeq.push_back(vec[i][j]);
		this->insortdeq(this->alldeq);
	}
	return alldeq;
}


int main(int ac,char** ag)
{
		std::cout << std::fixed;
	std::vector<int> tmp;
	int i = 1;
	PmergeMe me;
	if(ac > 2)
	{
		try
		{
		while(ag[i] != NULL)
		{
			try
			{
				me.vec.push_back(std::stoi(ag[i]));
				me.de.push_back(std::stoi(ag[i]));
				i++;
			}
			catch(const std::exception &e)
			{
				throw std::invalid_argument("Invalid argument");
			}
		}
		clock_t begin = clock();
		me.mergesrt(me.vec);
		me.allvec(me.main);
		clock_t end = clock();
		double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
		std::cout << "time spend  vec "<< time_spent<< " us " << std::endl;

		clock_t begindeg = clock();
		me.deparse(me.de);
		me.alld(me.main2);
		clock_t enddeg = clock();
		double time_spentdeg = (double)(enddeg - begindeg) / CLOCKS_PER_SEC;
		std::cout << "time spend deq "<< time_spentdeg << " us "<< std::endl;

		for(size_t i = 0; i < me.all.size(); i++)
			std::cout << me.all[i]<<" ";
			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	else
		std::cout << "Error" << std::endl;
	return 0;
}
