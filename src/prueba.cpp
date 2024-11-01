#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
    auto can = Canvas(100,100);
    can.DrawPointLine(15,50,35,50); 
    can.DrawPointCircle(40,50,4);
    can.DrawPointCircle(10,50,4);
    can.DrawPointLine(2,50,4,50); 
    can.DrawPointLine(2,50,2,42);
    can.DrawPointLine(2,50,2,42);
    while (true)
    {
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Red, border(vbox(canvas(&can))));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);
        frame++;
    }

    return 0;
}