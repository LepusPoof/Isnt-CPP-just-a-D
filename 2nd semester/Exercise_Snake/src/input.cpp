#include "Engine.hpp"

void Engine::input(){
    Event event{};

    while(window.pollEvent(event)){
        //The window will close if we tell it to
        if(event.type == Event::Closed){
            window.close();
        }

        //Handling keyboard inputs
        if(event.type == Event::KeyPressed) {
            //Quit first
            if(event.key.code == Keyboard::Escape){
                window.close();
            }

        //Direction

        if(event.key.code == Keyboard::Up){
            addDirection(Direction::UP);
        } else if(event.key.code == Keyboard::Down){
            addDirection(Direction::DOWN);
        } else if(event.key.code == Keyboard::Left){
            addDirection(Direction::LEFT);
        } else if (event.key.code == Keyboard::Right){
            addDirection(Direction::RIGHT);
        }


        }
    }
}

void Engine::addDirection(int newDirection){
        if(directionQueue.empty()){
            directionQueue.emplace_back(newDirection);
        } else {
            if(directionQueue.back()!= newDirection){
                directionQueue.emplace_back(newDirection);
            }
        }
    }
