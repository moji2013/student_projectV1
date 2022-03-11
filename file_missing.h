//
// Created by solo-l-ub on 2/27/22.
//

#ifndef STUDENT_PROJECTV1_FILE_MISSING_H
#define STUDENT_PROJECTV1_FILE_MISSING_H


namespace file_missing {

    class file_missing : public std::exception {

        private:
            const char * errors;

        public:
            file_missing ();
            file_missing ( const char * );

            const char * what() const noexcept override;



    };
}



#endif //STUDENT_PROJECTV1_FILE_MISSING_H
