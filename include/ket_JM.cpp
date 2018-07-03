#include "ket_JM.hpp"

// **********
// Constructors
// **********

_ket_JM::_ket_JM(int j1, int j2) {
    _frac<> A(1,1);
    _frac<> J(1,1);
    _frac<> M(1,1);
    
    JM.push_back(std::make_tuple(A, J, M));
    
    this->j1=_frac<>(j1, 1);
    this->j2=_frac<>(j2, 1);
}

_ket_JM::_ket_JM(double long j1, double long j2) {
    _frac<> A(1,1);
    _frac<> J(1,1);
    _frac<> M(1,1);
    
    JM.push_back(std::make_tuple(A, J, M));
    
    this->j1=_frac<>(j1, 1);
    this->j2=_frac<>(j2, 1);
}

_ket_JM::_ket_JM(_frac<> j1, _frac<> j2) {
    
    _frac<> A(1,1);
    _frac<> J(1,1);
    _frac<> M(1,1);
    
    JM.push_back(std::make_tuple(A, J, M));
    
    this->j1=j1;
    this->j2=j2;
}



// **********
// Operator overloads
// **********

// Copy operator
_ket_JM& _ket_JM::operator= ( const _ket_JM &ket_JM ) {
    if (&ket_JM!=this) {
        this->JM=ket_JM.JM;
        this->j1=ket_JM.j1;
        this->j2=ket_JM.j2;
    }
    return *this;
}


// **********
// Ket list
// **********

void _ket_JM::compute_ket_list() {
    

    
}





// **********
// Display
// **********

// show list of kets in Dirac style
void _ket_JM::show_ket_list() {   
    for(unsigned int i=0;i<this->ket_list.size();i++) {
        std::cout << " | ";
        this->j1.show();
        std::cout << " ; ";
        this->j2.show();
        std::cout << " >\n";
    }
}






