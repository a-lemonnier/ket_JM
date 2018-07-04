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
	
	std::cout << "compute j1 x j2 : j1=";
	this->j1.show();
	std::cout << "  j2=";
	this->j2.show();
	std::cout << "\n";

	_frac jmin=this->j1-this->j2;
	jmin=jmin.abs();

	_frac jmax=this->j1+this->j2;
	jmax++;

    for(_frac<> j=jmin;j<jmax;j++) { 

	this->J_list.push_back(j);
	
	_frac mmin=j*_frac<>(1,-1);
	_frac mmax=j;mmax++;

	for(_frac<> m=mmin;m<mmax;m++) { 
		this->ket_list.push_back(std::make_tuple(j,m));
	}
	
    }
    
    std::cout << "dim <{|JM>}>=" << this->ket_list.size() << "\n";

    
}





// **********
// Display
// **********

// show list of kets in Dirac style
void _ket_JM::show_ket_list() {   
    for(unsigned int i=0;i<this->ket_list.size();i++) {
        std::cout << "| J M > = | ";
	std::get<0>(this->ket_list[i]).show();
        std::cout << " ; ";
        std::get<1>(this->ket_list[i]).show();
	std::cout << " >\n";
    }
}

void _ket_JM::show_J_list() {
	std::cout << "J list: \n{ ";
	for(unsigned int i=0;i<this->J_list.size();i++) {
		this->J_list[i].show();
		std::cout << " ";
	}
	std::cout << " }\n";

}




