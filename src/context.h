#ifndef MEH_CONTEXT_H
#define MEH_CONTEXT_H

#include "SFML/Graphics.hpp"

class Scene;

class Context {

private:
    sf::RenderWindow *m_window;
    Scene* m_scene;
    int m_w;
    int m_h;
    std::map<int, Scene*> m_scenes;

public:
    Context();
    ~Context();
    static Context* current();
    int run(int* argc, char*** argv);
    std::string getTitle();
    void changeScene(Scene* scene);

};


#endif //MEH_CONTEXT_H
