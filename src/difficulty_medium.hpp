#ifndef __DIFFICULTY_MEDIUM_HPP__
#define __DIFFICULTY_MEDIUM_HPP__

class Medium{
    private:
        int difficulty;
    public:
        //Constructor:
        Medium():difficulty(1){};
        int getDifficulty() const{return difficulty;}
};

#endif //__DIFFICULTY_MEDIUM_HPP__