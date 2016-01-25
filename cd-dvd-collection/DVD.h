#ifndef DVD_H
#define DVD_H

#include "Media.h"

#include <iomanip>
#include <string>
using namespace std;

class DVD;

struct DVDActors
{
	string actor;
	string character;
};

ostream &operator << (ostream&, const DVD&);
ostream &operator << (ostream&, const DVDActors&); 
ostream &operator << (ostream&, const Linked_List<DVD>&);
ostream &operator << (ostream&, const Linked_List<DVDActors>&);

class DVD : public Media
{
private:

	DVDActors actorInstance;
	Linked_List<DVDActors> actorsList;

	string yearReleased;

	DVDActors getActorsInstance() const;
	Linked_List<DVDActors> getActorsList() const;

public:

	DVD();

	void setYearReleased(string);
	void setActorInstance(string);
	void setCharacterInstance(string);
	void setActorList();

	string getYearReleased() const;

	friend ostream &operator << (ostream &, const DVD &);
	friend ostream &operator << (ostream&, const DVDActors &);
	friend ostream &operator << (ostream&, const Linked_List<DVD>&);
	friend ostream &operator << (ostream&, const Linked_List<DVDActors>&);

	bool operator=(string str)
		{ return this->getTitle() == str; }

	bool operator==(string str)
		{ return this->getTitle() == str; }

	bool operator==(const DVD &dvd)
	{	 return this->getTitle() == dvd.getTitle(); }

	bool operator!=(const DVD &dvd)
			{ return this->getTitle() == dvd.getTitle(); }
};
#endif