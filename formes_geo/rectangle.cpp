#include "rectangle.h"

FormeRectangle::FormeRectangle():Figure()
{
	largeur=0;
	hauteur = 0;
}

FormeRectangle::FormeRectangle(int inX, int inY, int inLargeur, int inHauteur) : Figure(inX, inY)
{
	largeur = inLargeur;
	hauteur = inHauteur;
}

FormeRectangle::FormeRectangle(const FormeRectangle& inRectangle):Figure(inRectangle)
{
	largeur = inRectangle.largeur;
	hauteur = inRectangle.hauteur;
}

FormeRectangle::~FormeRectangle()
{

}

void FormeRectangle::setLargeur(int inLargeur)
{
  largeur = inLargeur;
}
void FormeRectangle::setHauteur(int inHauteur)
{
	hauteur = inHauteur;
}

int FormeRectangle::getLargeur() const
{
	return largeur;
}
int FormeRectangle::getHauteur() const
{
	return hauteur;
}
string FormeRectangle::getType() const
{
	return "Rectangle";
}
float FormeRectangle::CalculerAire() const
{
	return (float)(largeur*hauteur);
}

float FormeRectangle::CalculerPerimetre() const
{
	return (float)(largeur*2+hauteur*2);
}

void FormeRectangle::Selectionner(int inX,int inY)
{
	if ((inX>x) && (inX<(x+largeur)) && (inY>y) && (inY<(y+hauteur)))
		estSelectionne = true;
}