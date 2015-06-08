////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "Drawable.hpp"

////////////////////////////////////////////////////////////
/// Default constructor
////////////////////////////////////////////////////////////
Drawable::Drawable() : isVisible(true)
{

}


////////////////////////////////////////////////////////////
/// Default destructor
////////////////////////////////////////////////////////////
Drawable::~Drawable()
{

}


////////////////////////////////////////////////////////////
/// Draw the sprite
////////////////////////////////////////////////////////////
void Drawable::Draw( sf::RenderWindow &myWindow, float elapsedTime )
{
    if( isVisible )
    {
        myAnimations.Play( elapsedTime );
        myWindow.Draw( mySprite );
    }
}


////////////////////////////////////////////////////////////
/// Visible ou non ?
////////////////////////////////////////////////////////////
void Drawable::SetVisibility( bool visible )
{
    isVisible = visible;
}


////////////////////////////////////////////////////////////
/// Get the sprite
////////////////////////////////////////////////////////////
sf::Sprite* Drawable::GetSprite()
{
    return &mySprite;
}


////////////////////////////////////////////////////////////
/// Draw or not the sprite
////////////////////////////////////////////////////////////
bool Drawable::IsVisible() const
{
    return isVisible;
}