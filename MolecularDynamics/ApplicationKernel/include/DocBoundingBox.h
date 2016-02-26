#ifndef DocBoundingBox_h__
#define DocBoundingBox_h__


#ifdef DOCBOUNDINGBOX_EXPORTS
#define DOCBOUNDINGBOX_DLL __declspec(dllexport)
#else
#define DOCBOUNDINGBOX_DLL __declspec(dllimport)
#endif

#include "DocumentObject.h"

class DocBoundingBox : public DocumentObject
{
public:
	DocBoundingBox();
	~DocBoundingBox();
	void add(std::shared_ptr<DocumentObject> pDocObj);
	void remove(std::shared_ptr<DocumentObject> pDocObj);
private:
	std::list<std::shared_ptr<DocumentObject>> m_children;
};

#endif // DocBoundingBox_h__

