#ifndef SceneObject_h__
#define SceneObject_h__


#ifdef SCENEOBJECT_EXPORTS
#define SCENEOBJECT_DLL __declspec(dllexport)
#else
#define SCENEOBJECT_DLL __declspec(dllimport)
#endif

#include <memory>
#include "DocumentObject.h"

class DocumentObject;

class SceneObject
{
public:
	SceneObject();
	~SceneObject();
	void draw();
	std::weak_ptr<DocumentObject> pDocObj;
};

#endif // SceneObject_h__
