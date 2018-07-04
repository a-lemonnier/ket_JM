#include "nuc_spin.hpp"

_inuc_spin::_nuc_spin(unsigned int Z, unsigned  int N, int Ne) {
	this->Z=Z;
	this->N=N;
	this->Ne=Ne;
}

_nuc_spin& _nuc_spin::operator=(const _nuc_spin & atom) {

	if (&atom!=this) {
		this->Z=atom.Z;
		this->N=atom.N;
		this->Ne=atom.Ne;
	}
	
	return *this;
}

_frac& nuc_spin::spin() {
	_frac* res=new _frac;

	if (N%2==0) { res=_frac<>(0,1);	}

	return *res;
}

