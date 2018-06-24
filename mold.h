#ifndef mold_h
#define mold_h
#include <vector>
class mold{
    public:
        mold();
        mold(double f);
        mold(std::vector<double>& mold_input);
        mold(double f,std::vector<double>& mold_input);
    private:
        std::vector<double> eigvector;
        double freq;
};
#endif
