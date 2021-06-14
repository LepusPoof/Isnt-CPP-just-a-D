#include "Engine.hpp"

void Engine::draw(){
    window.clear(Color::Black);

    //drawing the snake sections
    for (auto & s : snake){
        window.draw(s.getShape());
    }

    window.display();
}
