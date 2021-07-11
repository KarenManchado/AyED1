#ifndef oviparous_h
#define oviparous_h
#include "abstract.h"

class crocodile : public oviparous
{
	public: 
	crocodile();
	~crocodile();
	void comer();
	void dormir();
};

class goose : public oviparous
{
	public:
		goose();
		~goose();
		void comer();
		void dormir();
};

class pelican : public oviparous
{
	public:
		pelican();
		~pelican();
		void comer();
		void dormir();
};

#endif 
