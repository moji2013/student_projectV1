//
// Created by solo-l-ub on 2/27/22.
//

#include "empty.h"


empty :: empty :: empty () {

    errors = "name can't be empty !\n";
}

empty :: empty :: empty ( const char * errors ) {

    (*this).errors = errors;

}


const char * empty :: empty :: what () const noexcept {

    return errors;
}