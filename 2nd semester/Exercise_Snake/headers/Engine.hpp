#ifndef ENGINE_H
#define ENGINE_H

#include "SnakeSection.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <vector>
#include <deque> //basically a vector but we can access things from the front

using namespace sf;
using namespace std;

class Engine
{
    public:
        enum Direction { UP, RIGHT, DOWN, LEFT };

        Engine();

        void input();
        void addDirection(int newDirection);
        void update();

        void draw();

        void newSnake();

        void addSnakeSection();


        //main loop will be in the run function
        void run();

    private:
        // window
        Vector2f resolution;
        RenderWindow window;
        const unsigned int FPS = 60;
        static const Time TimePerFrame;

        vector<SnakeSection> snake;
        int snakeDirection;
        deque<int> directionQueue; //queue for direction key presses


        int speed;
        Time timeSinceLastMove;





};

#endif // ENGINE_H
