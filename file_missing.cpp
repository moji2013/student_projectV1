//
// Created by solo-l-ub on 2/27/22.
//

#include "file_missing.h"


file_missing :: file_missing  :: file_missing () {

    errors = "file is missing \n";

}

file_missing :: file_missing :: file_missing ( const char * errors ) {
    (*this).errors = errors;

}

const char * file_missing :: file_missing :: what () const noexcept {

    return errors;

}