#ifndef carreH
#define carreH
#include "figure.h"

class Carre:public Figure
{
  protected:
    int cote;
  public:
	Carre();
	Carre(int x, int y, int cote);
	Carre(const Carre&);
	virtual ~Carre();
    void setCote(int);
	virtual int getCote() const;
	virtual string getType() const;
	virtual float CalculerPerimetre() const;
	virtual float CalculerAire() const;
	virtual void Selectionner(int inX, int inY);
};
#endif
