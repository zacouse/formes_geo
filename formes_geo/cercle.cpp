#include "cercle.h"

Cercle::Cercle():Figure()
{
	rayon = 0;
}

Cercle::Cercle(int inX, int inY, int inRayon) : Figure(inX, inY)
{
	rayon = inRayon;
}

Cercle::Cercle(const Cercle& inCercle):Figure(inCercle)
{
	rayon = inCercle.rayon;
}

Cercle::~Cercle()
{

}

void Cercle::setRayon(int inRayon)
{
  rayon = inRayon;
}

int Cercle::getRayon() const
{
	return rayon;
}

string Cercle::getType() const
{
	return"Cercle";
}

float Cercle::CalculerPerimetre() const
{
	return 2*Pi*rayon;
}

float Cercle::CalculerAire() const
{
	return Pi*(rayon*rayon);
}

void Cercle::Selectionner(int inX, int inY)
{
	float a = x + rayon;
	float b = y + rayon;
	estSelectionne = false;
	if ((((inX - a)*(inX - a)) + ((inY - b)*(inY - b))) / (rayon * rayon) <= 1)
	{
		estSelectionne = true;
	}
}
