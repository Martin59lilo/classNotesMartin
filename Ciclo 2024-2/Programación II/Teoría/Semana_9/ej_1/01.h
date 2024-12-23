class CPunto2D
{
private:
    float coord_x;
    float coord_y;
public:
    CPunto2D();
    CPunto2D(float _x, float _y);
    CPunto2D(const CPunto2D& objeto);
    ~CPunto2D();
    void datos();
    double distancia(const CPunto2D& otro);
};
