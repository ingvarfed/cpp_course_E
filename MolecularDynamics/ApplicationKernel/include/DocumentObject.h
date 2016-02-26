#ifndef DocumentObject_h__
#define DocumentObject_h__


#ifdef DOCUMENTOBJECT_EXPORTS
#define DOCUMENTOBJECT_DLL __declspec(dllexport)
#else
#define DOCUMENTOBJECT_DLL __declspec(dllimport)
#endif

#include <memory>
#include <list>

class DocumentObject
{
public:
	DocumentObject();
	virtual ~DocumentObject() = 0;
	virtual void add(std::shared_ptr<DocumentObject> pDocObj) = 0;
	virtual void remove(std::shared_ptr<DocumentObject> pDocObj) = 0;
	virtual void getChild(int) = 0;
};

#endif // DocumentObject_h__

