#include "include/ball.h"

int main()
{
    // Initialize the window and renderer
    InitWindow(screenWidth, screenHeight, "Ball Game");
    SetTargetFPS(60);

    // Create a ball with initial position, velocity, size, and color
    Ball ball = {{100.0f, 100.0f}, {0.0f, 0.0f}, 20.0f, RED};

    while (!WindowShouldClose())
    {
        // Update elapsed time
        float elapsedTime = GetFrameTime();

        // Handle keyboard input
        ball.handleInput();

        // Clear the screen and draw the ball
        BeginDrawing();
        ClearBackground(BLACK);
        ball.draw();
        EndDrawing();
    }

    // Close the window and unload resources
    CloseWindow();

    return 0;
}
