#include "Media.h"

Media::Media()
{
	title = "(none)";
	length = "(none)";
}

void Media::setTitle(string t)
{
	title = t;
}

void Media::setLength(string len)
{
	length = len;
}

string Media::getTitle() const
{
	return title;
}

string Media::getLength() const
{
	return length;
}
