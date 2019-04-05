#ifndef rectangleH
#define rectangleH
#include "figure.h"

class FormeRectangle:public Figure
{
  protected:
    int largeur;
	int hauteur;
  public:
	FormeRectangle();
	FormeRectangle(int x, int y, int largeur, int hauteur);
	FormeRectangle(const FormeRectangle&);
	~FormeRectangle();
	virtual void setLargeur(int);
	virtual void setHauteur(int);
	virtual int getLargeur() const;
	virtual int getHauteur() const;
	virtual float CalculerAire();
	virtual float CalculerPerimetre();
	virtual void Selectionner(int,int);
};
#endif
