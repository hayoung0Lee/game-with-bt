// ball.h

#ifndef BALL_H
#define BALL_H

#include <raylib.h>
#include <raymath.h>
#include "globals.h"

class Ball
{
public:
    Vector2 position;
    Vector2 velocity;
    float radius;
    Color color;

    // Update the ball's position and velocity based on elapsed time and any external forces
    // void update(float elapsedTime);

    // Handle keyboard input to update the ball's velocity
    void handleInput();

    // Draw the ball using the DrawCircle function provided by raylib
    void draw() const;
};

#endif // BALL_H
