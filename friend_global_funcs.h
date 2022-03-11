//
// Created by solo-l-ub on 2/27/22.
//

#ifndef STUDENT_PROJECTV1_FRIEND_GLOBAL_FUNCS_H
#define STUDENT_PROJECTV1_FRIEND_GLOBAL_FUNCS_H





namespace friend_global_funcs {

    ofstream & operator<< (ofstream &ofs, class list::list &l)  {

        if (!l.check_created_file())
            throw new file_missing::file_missing(
                    "can not write info to file something wrong with acquiring file in constructor of obj \n");


        ofs << l.name() << "\t" << l.price << "\t" << l.quantity << "\n";

        return ofs;

    }


    ifstream & operator>>(ifstream &ifs, list :: list &l) {

        l.set_readable_file();

        if (!l.check_opened_file())
            throw new file_missing::file_missing(
                    "can't retrieve data cuz file is not associated with obj currently I'm in operated >> overloaded fuc \n");


        ifs >> l.name >> l.price >> l.quantity;

        return ifs;
    }

}

#endif //STUDENT_PROJECTV1_FRIEND_GLOBAL_FUNCS_H
