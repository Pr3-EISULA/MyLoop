# include <SFML/Graphics.hpp>
# include <CFugueLib.h>
# include <iostream>
# include <string>


int main () 
{
    CFugue::Player player(1, 10);
    
   
    std::string x = "";

    sf::RenderWindow window(sf::VideoMode(605, 300), "Piano");
    sf::Texture texture;

    if (!texture.loadFromFile("piano_opt.jpg"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);

    sf::Font font;
    if (!font.loadFromFile("Roboto-Thin.ttf"))
        return EXIT_FAILURE;

    sf::Text text("WOW", font, 50);
    text.setFillColor(sf::Color::White);

    text.setPosition(0, 240);

    

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                player.Play("I[83] CMaj7w");

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) 
            {
                player.Play("C4i");
                x.append("C4i ");
            }
                

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2)) 
            {
                player.Play("C#4i");
                x.append("C#4i ");
            }
                

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) 
            {
                player.Play("D4i");
                x.append("D4i ");
            }
                
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3)) 
            {
                player.Play("D#4i");
                x.append("D#4i ");
            }
                
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::E)) 
            {
                player.Play("E4i");
                x.append("E4i ");
            }
                
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::R)) 
            {
                player.Play("F4i");
                x.append("F4i ");
            }
                

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
            {
                player.Play("F#4i");
                x.append("F#4i ");
            }
                
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
            {   
                player.Play("G4i");
                x.append("G4i ");
            }
                

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
            {
                player.Play("G#4i");
                x.append("G#4i ");
            }
                
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
            {
                player.Play("A4i");
                x.append("A4i ");
            }
                
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
            {
                player.Play("A#4i");
                x.append("A#4i ");
            }
                
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
            {
                player.Play("B4i");
                x.append("B4i ");
            }
                
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
            {
                player.Play("C5i");
                x.append("C5i ");
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num9))
            {
                player.Play("C#5i");
                x.append("C#5i ");
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::O))
            {
                player.Play("D5i");
                x.append("D5i ");
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num0))
            {
                player.Play("D#5i");
                x.append("D#5i ");
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
            {
                player.Play("E5i");
                x.append("E5i ");
            }



        }

        const char * a = x.c_str();
        CFugue::MString m(a);

        window.clear();
        window.draw(sprite);
        window.draw(text);
        window.display();

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
            player.Play(a);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            x = "";
    }
    return EXIT_SUCCESS;
}
