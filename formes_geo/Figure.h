#ifndef FigureH
#define FigureH

#include <string>
using namespace std;

const float Pi=(float)3.14159265359;

class Figure
{
protected:
	int x;	//coin sup�rieur gauche
	int y;
	bool estSelectionne;

public:
	Figure();
	Figure(int x, int y);
	Figure(const Figure&);
	int getX() const;
	int getY() const;
	virtual int getCote() const;
	virtual int getRayon() const;
	virtual float CalculerPerimetre() const;
	virtual float CalculerAire() const;
	void setPoint(int X, int Y);
	void setX(int);
	void setY(int);
	bool EstSelectionne();	
	void Deselectionner();
};

#endif