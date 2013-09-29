#ifndef FSTRINGITEM
#define	FSTRINGITEM

#include "fr_def.h"

class FStringItem : public BStringItem
{
public:
	FStringItem();
	FStringItem(const char *text, const char *url, uint32 level=0, bool expanded = true, bool addDescFlag = false);
	FStringItem(FStringItem& fi);
	
	const char* Title() const;
	const char* Url() const;
	const XmlNode* const Desc() const;
	const char*	Date() const;
	bool		Visited() const;
	bool		IsAddDesc() const;
	
	void		SetUrl(const char* url);
	void		SetDesc(const XmlNode* const node);
	void		SetDate(const char* date);
	void		SetAddDesc(bool add=true);
	void 		SetVisited(bool vis = true);
	
	void		SetTitleHtml(BString title);
	
private:
	bool		bAddDesc;
	bool		visited;
	
	BString		sUrl;
	const XmlNode*	sDesc;
	BString		sDate;
};

int compare_func(const BListItem* firstArg, const BListItem* secondArg);

#endif
