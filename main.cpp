#include <iostream>

#include "include/basic_fracs.hpp"
#include "include/ket_JM.hpp"


int main(int argc, char **argv) {
    
    std::cout << "Ongoing..." << std::endl;
    
    _ket_JM ket_JM(_frac<>(1,1),_frac<>(1,2));
    
    ket_JM.compute_ket_list();
    
    
//     _frac<> A=_frac<>(5,2);
//     A.show();
//     std::cout << "\n";
//     _frac<> B=_frac<>(127,3);
//     B.show();
//     std::cout << "\n";
//     _frac<> C=A+B;
//     
//     if (A<B) std::cout << "A<B\n";
//     if (A>B) std::cout << "A>B\n";
//     
//     C.show();
//     std::cout << "\n";
//     
    
    
    return 0;
}
