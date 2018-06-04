#include <SFML/Window.hpp>

int main()
{
    sf::Window window(sf::VideoMode(640, 480), "Simple SFML Example");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}