#ifndef SceneBoundingBox_h__
#define SceneBoundingBox_h__


#ifdef SCENEBOUNDINGBOX_EXPORTS
#define SCENEBOUNDINGBOX_DLL __declspec(dllexport)
#else
#define SCENEBOUNDINGBOX_DLL __declspec(dllimport)
#endif

#include "Scene.h"

class SceneBoundingBox :
	public Scene
{
public:
	SceneBoundingBox();
	~SceneBoundingBox();
};

#endif // SceneBoundingBox_h__
