#ifndef abstract_h
#define abstract_h
class animal{
public:
virtual void comer()=0;
virtual void dormir()=0;
void breed();
void setname();
void getname();
void tipo();
void setcode(int);

protected:
std::string name;
int code; 	
};

class oviparous : public animal
	{
		public: 
		void layeggs();
	};
	
class mammal : public animal{
	public: 
	void nurse();
};
#endif
