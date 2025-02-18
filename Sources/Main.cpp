#include "defGameEngine.hpp"
#include <iostream>

class Example : public def::GameEngine
{
public:
    Example()
    {
        UseOnlyTextures(true);
        GetWindow()->SetTitle("Example");
    }

protected:
    bool OnUserCreate() override
    {
        return true;
    }

    bool OnUserUpdate(float deltaTime) override
    {
        ClearTexture(def::BLACK);
        DrawTextureString({ 50, 50 }, "Hello, defGameEngine!", def::BLUE);
        
        return true;
    }
};

int main()
{
    Example test;

    if (test.Construct(256, 240, 4, 4))
        test.Run();

    return 0;
}
