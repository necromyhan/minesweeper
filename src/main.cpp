#include "include/external/Color.hpp"
#include "include/external/Text.hpp"
#include "include/external/Window.hpp"
#include "include/external/raylib-cpp.hpp"

int main()
{
    raylib::Window window(800, 450, "Minesweeper");

    while (!window.ShouldClose())
    {
        window.BeginDrawing();
            window.ClearBackground(raylib::Color::RayWhite());
            raylib::Text text(::GetFontDefault(), "Hello, World!", 45, 5, raylib::Color::Gray());
            text.Draw(10, 10);
        window.EndDrawing();
    }

    return 0;
}
