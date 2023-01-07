#include <raylib.h> // Include the raylib library

int main()
{
    // Initialize the window and graphics device
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "My Game");
    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose())
    {
        // Update game state

        // Draw graphics
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, world!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    // Clean up resources and close the window
    CloseWindow();

    return 0;
}