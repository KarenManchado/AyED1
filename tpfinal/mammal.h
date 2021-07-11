#ifndef mammal_h
#define mammal_h
#include "abstract.h"

class bat : public mammal 
{
	public:
		bat();
		~bat();
		void comer();
		void dormir();
};

class whale : public animal{
public:
	whale();
	~whale();
	void comer();
	void dormir();
};

class sealion : public animal
{
	public:
		sealion();
		~sealion();
		void comer();
		void dormir();
};
#endif
