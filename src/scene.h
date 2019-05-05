#ifndef MEH_SCENE_H
#define MEH_SCENE_H


#include "game_object.h"
class Context;

class Scene: public GameObject {
public:
    Scene(Context* context);
    virtual ~Scene();
    virtual void start();
    virtual void stop();
};


#endif //MEH_SCENE_H
