#ifndef __DIFFICULTY_HARD_HPP__
#define __DIFFICULTY_HARD_HPP__

class Hard{
    private:
        int difficulty;
    public:
        //Constructor:
        Hard():difficulty(2){};
        int getDifficulty() const{return difficulty;}
};

#endif //__DIFFICULTY_HARD_HPP__