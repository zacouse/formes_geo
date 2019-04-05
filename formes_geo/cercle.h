#ifndef cercleH
#define cercleH
#include "figure.h"
//---------------------------------------------------------------------------
class Cercle:public Figure
{
  protected:
    int rayon;
  public:
	Cercle();
	Cercle(int x, int y, int rayon);
	Cercle(const Cercle&);
	virtual ~Cercle();
    void setRayon(int);
	virtual int getRayon() const;
	virtual string getType() const;
	virtual float CalculerPerimetre() const;
	virtual float CalculerAire() const;
	virtual void Selectionner(int inX, int inY);
};
#endif
