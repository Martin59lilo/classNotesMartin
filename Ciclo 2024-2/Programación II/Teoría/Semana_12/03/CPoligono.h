class CPoligono
{
private:
public:
    double lado;
    CPoligono();
    CPoligono(double _lado);
    double area();
    virtual double apotema()=0;
    virtual double semiperimetro()=0;
    virtual ~CPoligono();
};


