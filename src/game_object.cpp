#include "game_object.h"

#include "context.h"

GameObject::GameObject(Context *context) {
    this->m_context = context;
}

GameObject::~GameObject() {

}

Context *GameObject::ctx() {
    return m_context;
}

void GameObject::render(sf::RenderTarget *t) {

}

void GameObject::update(sf::Time *t) {

}

void GameObject::handle(sf::Event *e) {

}
