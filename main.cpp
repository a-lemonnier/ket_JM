#include <iostream>
#include <string>


#include "include/basic_fracs.hpp"
#include "include/ket_JM.hpp"
#include "include/nuc_spin.hpp"


int main(int argc, char **argv) {
    

	_frac<> j1, j2;

	std::string sj1=(argv[1]);
	std::string sj2=(argv[2]);

	std::size_t pos1=sj1.find('/');
	std::size_t pos2=sj2.find('/');
	

	if (pos1!=std::string::npos) 
		j1=_frac<>(std::stold(sj1.substr(0,pos1)),std::stold(sj1.substr(pos1+1,sj1.length()-1)));
	else {
		j1=_frac<>(std::stold(sj1),1);
	}
	if (pos2!=std::string::npos) 
		j2=_frac<>(std::stold(sj2.substr(0,pos2)),std::stold(sj2.substr(pos2+1,sj2.length()-1)));
	
	else {
		j2=_frac<>(std::stold(sj2),1);
	}

	

	
   

    _ket_JM ket_JM(j1,j2);
    
    ket_JM.compute_ket_list();

    ket_JM.show_ket_list();
   
    ket_JM.show_J_list(); 




    
    

    
    
    return 0;
}
