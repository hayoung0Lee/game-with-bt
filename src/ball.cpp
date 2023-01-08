#include "include/ball.h"

void Ball::handleInput()
{
    if (IsKeyDown(KEY_LEFT))
    {
        position.x -= 10.0f;
    }
    if (IsKeyDown(KEY_RIGHT))
    {
        position.x += 10.0f;
    }
    if (IsKeyDown(KEY_UP))
    {
        position.y -= 10.0f;
    }
    if (IsKeyDown(KEY_DOWN))
    {
        position.y += 10.0f;
    }

    position.x = Clamp(position.x, radius, screenWidth - radius);
    position.y = Clamp(position.y, radius, screenHeight - radius);
}

// Draw the ball using the DrawCircle function provided by raylib
void Ball::draw() const
{
    DrawCircle(position.x, position.y, radius, color);
}