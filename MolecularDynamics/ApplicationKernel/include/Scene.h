#ifndef Scene_h__
#define Scene_h__


#ifdef SCENE_EXPORTS
#define SCENE_DLL __declspec(dllexport)
#else
#define SCENE_DLL __declspec(dllimport)
#endif

class Scene
{
public:
	Scene();
	~Scene();
};

#endif // Scene_h__
