// symbolic constants
#ifndef MSG_ENTER_NAME
#define MSG_ENTER_NAME "please_enter_item_name \n"
#endif

#ifndef MSG_ENTER_PRICE
#define MSG_ENTER_PRICE "please_enter_price\n"
#endif

// preprocessor directives macros

#ifndef MSG
#define MSG(X) #X;
#endif

// global identifiers
// global constant identifiers

// constants

#include <iostream>
using namespace std;

// using namespaces





// classes
#include "file_missing.h"
#include "empty.h"
#include "list.h"


// libraries
#include "friend_global_funcs.h"

int main() {



    // obj creation
    list :: list obj;
/////////////////////////////////////////


    // writing obj to file
    cout << MSG_ENTER_NAME;
    string temp_name;
    cin >> temp_name;

    cout << MSG_ENTER_PRICE;
    int temp_price;
    cin >> temp_price;


    cout << MSG(please_enter_quantity);
    cout << endl;
    short temp_quantity;
    cin >> temp_quantity;


    try {

        obj.set_name ( temp_name );
        obj.set_price ( temp_price );
        obj.set_quantity ( temp_quantity );

        obj.set_created_file();

        obj.ofs << obj;

        // protected code

        cout << "successfully written to file \n";

    }
    catch (  class empty :: empty *e) {
        cout << (*e).what();

    }
    catch ( class file_missing :: file_missing *e) {
        cout << (*e).what();
    }
    catch ( exception e ) {
        cout << e.what();
    }
    catch ( ... ) {

        cout << "couldn't write contact administrator \n";
    }


    // finally so will execute otherwise

    cout << "end of try catch write \n";


    ///////////////////////////////////////////////////////////////


    // write a list of items

//
//    class list :: list li [4] = { {"mobile" , 40 , 40} , { "monitor" , 30 , 30 } , {"keyboard" , 20,20} , {"laptop",10,10} };
//
//
//    for ( char i=0 ; i<4 ; i++ ) {
//
//        li->ofs << li[i];
//    }
//
//    cout << "successfully written the array \n";

//////////////////////////////////////////////////////////////////////////



    // reading into an obj

    try {

        obj.ifs >> obj;

        // protected code
        cout << "successfully read into obj\n";


        cout << obj.get_name() << "\t";
        cout << obj.get_quantity() << "\t";
        cout << obj.get_price() << endl;

    }
    catch ( file_missing :: file_missing *e ) {

        cout << (*e).what();
    }
    catch ( exception e ) {
        cout << e.what();
    }

    catch (...) {
        cout << "couldn't read contact admin \n";

    }

    // finally
    cout << "end of try catch read \n";


    //////////////////////////////////////////////////

    return 0;
}

