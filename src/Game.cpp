#include "Game.h"
#include "raylib.h"

Game::Game()
{
}

Game::~Game()
{
}

bool Game::Initialise()
{
    SetTargetFPS(60);
    InitWindow(800, 600, "Window");

    return true;
}

void Game::RunLoop()
{
    while (!WindowShouldClose())
    {
        ProcessInput();
        UpdateGame();
        GenerateOutput();
    }
}

void Game::Shutdown()
{
    CloseWindow();
}

void Game::GenerateOutput()
{
    BeginDrawing();

    ClearBackground(BLACK);

    // Insert actor drawing here.

    EndDrawing();
}

void Game::ProcessInput()
{
    // Process IO inputs here.
}

void Game::UpdateGame()
{
    // Update actors here.
}