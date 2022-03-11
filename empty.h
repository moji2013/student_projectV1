//
// Created by solo-l-ub on 2/27/22.
//

#ifndef STUDENT_PROJECTV1_EMPTY_H
#define STUDENT_PROJECTV1_EMPTY_H



namespace empty {

    class empty : public std::exception {

         private:
            const char * errors ;

        public:
            empty();
            empty( const char * );


            const char * what() const noexcept override;



        };

}


#endif //STUDENT_PROJECTV1_EMPTY_H
