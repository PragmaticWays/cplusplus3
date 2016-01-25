#ifndef CD_H
#define CD_H

#include "Media.h"

#include <string>
#include <iomanip>
using namespace std;

class CD;

struct SongInfo
{
	string songTitle;
	string songLength;
};

ostream &operator << (ostream&, const CD&);
ostream &operator << (ostream&, const SongInfo&);
ostream &operator << (ostream&, const Linked_List<CD>&);
ostream &operator << (ostream&, const Linked_List<SongInfo>&);


class CD : public Media
{
private:

	SongInfo songInstance;
	Linked_List<SongInfo> songList;

	string artist;

	SongInfo getSongInstance() const;
	Linked_List<SongInfo> getSongList() const;

public:

	CD();
	
	void setArtist(string);
	void setSongInstanceTitle(string);
	void setSongInstanceLength(string);
	void setSongList();

	string getArtist() const;

	friend ostream &operator << (ostream&, const CD&);
	friend ostream &operator << (ostream&, const SongInfo&);
	friend ostream &operator << (ostream&, const Linked_List<CD>&);
	friend ostream &operator << (ostream&, const Linked_List<SongInfo>&);

	bool operator=(string str)
		{ return this->getTitle() == str; }

	bool operator==(string str)
		{ return this->getTitle() == str; }

	bool operator==(const CD &cd)
		{ return this->getTitle() == cd.getTitle(); }

	bool operator!=(const CD &cd)
		{ return this->getTitle() == cd.getTitle();}
};
#endif