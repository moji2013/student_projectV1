#ifndef STUDENT_PROJECTV1_LIST
#define STUDENT_PROJECTV1_LIST


#include <fstream>



namespace list {

    class list {

        private:

            string name;
            int price;
            short quantity;


        public:

            ofstream ofs;
            ifstream ifs;


            // file_mutators
            void set_created_file () noexcept(false) ;
            void set_readable_file ();

            // constructors
            list() noexcept ( noexcept ( set_created_file() ) )  ;

            list ( string  , int , short  ) noexcept(false) ;
            list ( class list &) noexcept ( noexcept ( set_created_file() ) ) ;

            // initialization to cover after construction of an obj
            void initialize ( string , int , short ) noexcept(false) ;

            // mutators
            void set_name ( string ) noexcept(false);
            void set_price ( int ) noexcept(false) ;
            void set_quantity ( short ) noexcept(false) ;


            // accessors

            string get_name ( ) const  noexcept;
            int get_price () const noexcept;
            int get_quantity () const noexcept;


            // Enqueries
            bool check_created_file () noexcept;
            bool check_opened_file();

            // destructor
            ~list();



            // friend global functions
            // overloaded operators

            friend ofstream & friend_global_funcs :: operator << ( ofstream & , class list::list &) ;
            friend ifstream &  friend_global_funcs :: operator >> ( ifstream & , class list::list &) ;


    };
}


#endif