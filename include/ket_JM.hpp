#ifndef KET_JM_HPP
#define KET_JM_HPP

#include "basic_fracs.hpp"

#include<iostream>
#include<vector>
#include<tuple>
#include<cmath>


class _ket_JM : public _frac<> {
public:

    _ket_JM(int, int);
    _ket_JM(double long, double long);
    _ket_JM(_frac<>, _frac<>);
    
    // |JM> = a1 |m11 m21 >+a2 | m12 m22 >+...
    std::vector<std::tuple<_frac<>, _frac<>, _frac<> >> JM;
    
    std::vector<std::tuple<_frac<>, _frac<> >> ket_list;
    std::vector<_frac<> > J_list;
    
    _frac<> j1;
    _frac<> j2;

    _ket_JM& operator= ( const _ket_JM &ket );
    _ket_JM& operator* ( const _ket_JM &ket ); // Moment composition
    
    void compute_ket_list();
    void compute_JM();
    
    void show_ket_list(void);
    void show_JM(void);
    void show_J_list();
    
    
    

};

#endif // KET_JM_HPP


