#ifndef BASIC_FRACS_HPP
#define BASIC_FRACS_HPP

#include <iostream>
#include <cmath>
#include <iomanip>


template<class _T=double long, class _T1=double long, class _T2=double long>
class _frac {
public:
    
    _T F[2];
    
    _frac(_T1 a, _T2 b);
    _frac();

    void show(void);
    void simplify(void);
    
    _frac& operator= ( const _frac &frac );
    
    _frac& operator+ ( const _frac &frac );
    _frac& operator- ( const _frac &frac );
    _frac& operator* ( const _frac &frac );
    _frac& operator^ ( _T2 n );
    _frac& operator/ ( const _frac&frac );
    
    _frac& operator+= ( const _frac &frac );
    _frac& operator-= ( const _frac &frac );
    _frac& operator*= ( const _frac &frac );
    
    bool operator== ( const _frac &frac );
    bool operator!= ( const _frac &frac );
    
protected:
    bool simplified;
    
private:
   _T gcd(_T1, _T2);

};

#include "basic_fracs.tpp"

#endif // BASIC_FRACS_HPP
