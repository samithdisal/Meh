#include "context.h"
#include "scene.h"


Context::Context() {

}

Context::~Context() {
    std::map<int, Scene*>::iterator ptr;
    for (ptr = m_scenes.begin();ptr!=m_scenes.end();ptr++) {

    }

}


int Context::run(int *argc, char ***argv) {
    m_window = new sf::RenderWindow(sf::VideoMode::getDesktopMode(), getTitle(), sf::Style::Fullscreen | sf::Style::Close | sf::Style::Titlebar);
    m_w = m_window->getSize().x;
    m_h = m_window->getSize().y;
    sf::Event event = {};
    sf::Clock c;
    sf::Time t;
    while (m_window->isOpen()) {
        m_window->clear();

        while (m_window->pollEvent(event)) {
            if (event.type==sf::Event::Closed) {
                m_window->close();
            }
            // Normally this is handled by the desktop window manager, but in case it forgets
            if (event.type==sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::F4 && event.key.alt) {
                    m_window->close();
                }
            }
            if (m_scene) m_scene->handle(&event);
        }
        if (m_scene) {
            t = c.restart();
            m_scene->update(&t);
            m_scene->render(m_window);
        }
        m_window->display();
    }

    return 0;
}

std::string Context::getTitle() {
    return "Meh";
}

Context *Context::current() {
    static Context g_context;
    return &g_context;
}

void Context::changeScene(Scene *scene) {
    if (m_scene)
        m_scene->stop();
    if (scene) {
        scene->start();
        m_scene = scene;
    }
}
