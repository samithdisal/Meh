#ifndef MEH_GAME_OBJECT_H
#define MEH_GAME_OBJECT_H


#include "SFML/Graphics.hpp"

class Context;

class GameObject {
private:
    Context *m_context;
public:
    GameObject(Context* context);
    virtual ~GameObject();
    Context* ctx();
    virtual void render(sf::RenderTarget *t);
    virtual void update(sf::Time* t);
    virtual void handle(sf::Event* e);

};


#endif //MEH_GAME_OBJECT_H
