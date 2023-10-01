#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <time.h>


class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(PmergeMe& obj);
		PmergeMe& operator=(PmergeMe const& obj);
		std::vector<int> vec;
		std::vector<int> all;
		std::deque<int> de;
		std::deque<int> alldeq;
		void mergesrt(std::vector<int> &ag);
		void deparse(std::deque<int> &ag);
		 void insortvec(std::vector<int> &ag);
		 void insortdeq(std::deque<int> &ag);
		std::vector<std::vector <int> > main;
		std::deque<std::deque <int> > main2;
		std::vector<int> allvec(std::vector <std::vector <int> > &vec);
		std::deque<int> alld(std::deque <std::deque <int> > &vec);
};
