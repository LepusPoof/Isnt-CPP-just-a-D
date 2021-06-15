#include "Engine.hpp"

void Engine::update(){
    //This updates snake position
    if(timeSinceLastMove.asSeconds() >= seconds(1.f/float(speed)).asSeconds()){
        Vector2f thisSectionPosition = snake[0].getPosition();
        Vector2f lastSectionPosition = thisSectionPosition;

        //is there anything in the input queue
        if(!directionQueue.empty()){
            //stop the user from reversing
            switch (snakeDirection){
            case Direction::UP:
                if(directionQueue.front() != Direction::DOWN){
                    snakeDirection = directionQueue.front();
                }
            break;
            case Direction::DOWN:
            if(directionQueue.front() != Direction::UP){
                snakeDirection = directionQueue.front();
            }
            break;
            case Direction::LEFT:
            if(directionQueue.front() != Direction::RIGHT){
                snakeDirection = directionQueue.front();
            }
            break;
            case Direction::RIGHT:
            if(directionQueue.front() != Direction::LEFT){
                snakeDirection = directionQueue.front();
            }
            break;
            }

            directionQueue.pop_front();

        }

        //Snake's head
        switch (snakeDirection){
            case Direction::RIGHT:
            snake[0].setPosition(Vector2f(thisSectionPosition.x + 20, thisSectionPosition.y));
            break;
            case Direction::LEFT:
            snake[0].setPosition(Vector2f(thisSectionPosition.x, thisSectionPosition.y + 20));
            break;
            case Direction::UP:
            snake[0].setPosition(Vector2f(thisSectionPosition.x, thisSectionPosition.y - 20));
            break;
            case Direction::DOWN:
            snake[0].setPosition(Vector2f(thisSectionPosition.x - 20, thisSectionPosition.y));
            break;
        }

        //Snake's tail
        for(int i = 1; i < snake.size(); i++){
            thisSectionPosition = snake[i].getPosition();
            snake[i].setPosition(lastSectionPosition);
            lastSectionPosition = thisSectionPosition;
        }

        //update the sections in-between
        for(auto & i : snake){
            i.update();
        }


        //Reset the last move timer.
        timeSinceLastMove = Time::Zero;
        //Ending the updates
    }

}
