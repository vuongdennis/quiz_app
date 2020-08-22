#ifndef __DIFFICULTY_HPP__
#define __DIFFICULTY_HPP__

#include "difficulty_easy.hpp"
#include "difficulty_medium.hpp"
#include "difficulty_hard.hpp"

class Difficulty{
    private:
        int difficulty;
    public:
        //Constructor:
        //Precondition: diff must be either 0, 1, or 2
        Difficulty(int diff){
            if(diff==0){
                Easy*e=new Easy();
                difficulty=e->getDifficulty();
            }
            else if(diff==1){
                Medium*m=new Medium();
                difficulty=m->getDifficulty();
            }
            else{
                Hard*h=new Hard();
                difficulty=h->getDifficulty();
            }
        };
        //accessor
        int getDifficulty() const{return difficulty;}
};

#endif //__DIFFICULTY_HPP__