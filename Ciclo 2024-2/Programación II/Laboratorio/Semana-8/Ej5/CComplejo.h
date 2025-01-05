class CComplejo
{
private:
    int real, imaginario;
    CComplejo* p;
public:
    CComplejo();
    CComplejo(int _real, int _imaginario);
    ~CComplejo();
    int get_real();
    int get_imaginario();
    void set_real(int _real);
    void set_imaginario(int _imaginario);
    CComplejo* suma(CComplejo *otro);
    CComplejo* diferencia(CComplejo *otro);
};