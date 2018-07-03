#ifndef KET_JM_HPP
#define KET_JM_HPP

#include "basic_fracs.hpp"


class _ket : public _frac<> {
public:

    _ket();

    _ket& operator= ( const _ket &ket );

};

#endif // KET_JM_HPP
