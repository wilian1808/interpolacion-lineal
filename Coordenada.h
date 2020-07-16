#ifndef LINEAL_H_INCLUDED
#define LINEAL_H_INCLUDED

class Coordenada
{
private:
    int x;
    int y;
public:
    Coordenada(int x, int y);
    int getX();
    int getY();
};

Coordenada::Lineal(int x = 0, int y = 0)
{
    this->x = x;
    this->y = y;
}

int Coordenada::getX()
{
    return this->x;
}

int Coordenada::getY()
{
    return this->y;
}

#endif // LINEAL_H_INCLUDED
