#pragma once 

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
class Base
{
public:
	virtual ~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);