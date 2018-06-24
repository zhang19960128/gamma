#include "mold.h"
mold::mold(){
};
mold::mold(double f){
    freq=f;
};
mold::mold(std::vector<double>& mold_input){
    eigvector=mold_input;
}
mold::mold(double f,std::vector<double>& mold_input){
    freq=f;
    eigvector=mold_input;
};
