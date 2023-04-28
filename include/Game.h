#include "raylib.h"

class Game
{
public:
    Game();
    ~Game();

    bool Initialise();

    void RunLoop();

    void Shutdown();

private:
    void ProcessInput();
    void UpdateGame();
    void GenerateOutput();
};