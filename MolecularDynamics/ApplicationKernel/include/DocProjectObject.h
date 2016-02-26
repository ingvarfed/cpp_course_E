#ifndef DocProjectObject_h__
#define DocProjectObject_h__


#ifdef DOCPROJECTOBJECT_EXPORTS
#define DOCPROJECTOBJECT_DLL __declspec(dllexport)
#else
#define DOCPROJECTOBJECT_DLL __declspec(dllimport)
#endif

#include "DocumentObject.h"

class DocProjectObject : public DocumentObject
{
public:
	DocProjectObject();
	~DocProjectObject();
	void add(std::shared_ptr<DocumentObject> pDocObj);
	void remove(std::shared_ptr<DocumentObject> pDocObj);
private:
	std::list<std::shared_ptr<DocumentObject>> m_children;
};

#endif // DocProjectObject_h__

