#include "Engine.hpp"

const sf::Time Engine::TimePerFrame = seconds(1.f/60.f);

Engine::Engine(){
    resolution = Vector2f(800,600);
    window.create(VideoMode(resolution.x, resolution.y), "Snake", Style::Default);
    window.setFramerateLimit(FPS);

    speed = 2;
    snakeDirection = Direction::RIGHT;

    timeSinceLastMove = Time::Zero;

    newSnake();
}

//starting Sssssnake!
void Engine::newSnake(){
    snake.clear();
    snake.emplace_back((Vector2f(100, 100)));
    snake.emplace_back((Vector2f(80, 100)));
    snake.emplace_back((Vector2f(60, 100)));
}

//adding the section (tail) to a snake.
void Engine::addSnakeSection(){
    Vector2f newSectionPosition = snake[snake.size() - 1].getPosition();
    snake.emplace_back(newSectionPosition);
}

void Engine::run(){
    Clock clock;
    Time dt = clock.restart();
    timeSinceLastMove += dt;

    // main game loop - runs until window is closed
    while (window.isOpen()){
        input();
        update();
        draw();
    }
}
