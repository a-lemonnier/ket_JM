#ifndef NUC_SPIN_HPP
#define NUC_SPIN_HPP

#include "basic_fracs.hpp"

class _nuc_spin: public _frac<> {
public:
	_nuc_spin(unsigned int Z, unsigned int N, int Ne);

	_nuc_spin& operator=(const _nuc_spin &);

protected:
	unsigned int Z, N;
        int Ne;

private:
	_frac& spin(void);

};



#endif
