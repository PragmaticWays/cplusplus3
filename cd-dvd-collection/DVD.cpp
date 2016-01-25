#include "DVD.h"

DVD::DVD()
{
	yearReleased = ("none");
	actorInstance.actor = "(none)";
	actorInstance.character = "(none)";
}


void DVD::setYearReleased(string y)
	{ yearReleased = y; }

void DVD::setActorInstance(string a)
	{ actorInstance.actor = a; }

void DVD::setCharacterInstance(string c)
	{ actorInstance.character = c; }

void DVD::setActorList()
	{ actorsList.appendNode(actorInstance); }



string DVD::getYearReleased() const
	{ return yearReleased; }

DVDActors DVD::getActorsInstance() const
	{ return actorInstance; }

Linked_List<DVDActors> DVD::getActorsList() const
	{ return actorsList; }



ostream &operator << (ostream& strm, const DVDActors &obj)
{
	strm << left << setw(16) << obj.actor
		<< left << setw(64) << obj.character;

	return strm;
}

ostream &operator << (ostream &strm, const DVD &obj)
{
	strm << endl
		<< left << setw(16) << obj.getTitle()
		<< left << setw(16) << obj.getLength()
		<< left << setw(16) << obj.getYearReleased()
		<< left << setw(0) << obj.getActorsList();

	return strm;
}

ostream &operator << (ostream& strm, const Linked_List<DVDActors> &obj)
{
	obj.displayList();
	return strm;
}

ostream &operator << (ostream& strm, const Linked_List<DVD> &obj)
{
	obj.displayList();
	return strm;
}