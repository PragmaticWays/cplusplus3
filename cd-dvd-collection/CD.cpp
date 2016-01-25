#include "CD.h"

CD::CD()
{
	artist = "(none)";
	songInstance.songTitle = "(none)";
	songInstance.songLength = "(none)";
}


void CD::setArtist(string a)
	{ artist = a; }

void CD::setSongInstanceTitle(string t)
	{ songInstance.songTitle = t; }

void CD::setSongInstanceLength(string len)
	{ songInstance.songLength = len; }

void CD::setSongList()
	{ songList.appendNode(songInstance); }



string CD::getArtist() const
	{ return artist; }

SongInfo CD::getSongInstance() const
	{ return songInstance; }

Linked_List<SongInfo> CD::getSongList() const
	{ return songList; }




ostream &operator << (ostream& strm, const SongInfo &obj)
{
	strm << left << setw(16) << obj.songTitle
		<< left << setw(64) << obj.songLength;

	return strm;
}

ostream &operator << (ostream &strm, const CD &obj)
{
	strm << endl 
		<< left << setw(16) << obj.getArtist() 
		<< left << setw(16) << obj.getTitle() 
		<< left << setw(16) << obj.getLength()
		<< left << setw(0) << obj.getSongList();

	return strm;
}

ostream &operator << (ostream& strm, const Linked_List<SongInfo> &obj)
{
	obj.displayList();
	return strm;
}

ostream &operator << (ostream& strm, const Linked_List<CD> &obj)
{
	obj.displayList();
	return strm;
}