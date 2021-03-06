#ifndef LEVEL4_H
#define LEVEL4_H

#include <string>
#include "level.h"

class Block; 

class Level4: public Level{
    public:
        Level4(int seed = 0, std::string file = "", bool useRandom = true);
        ~Level4();

        std::string spawnRandom() override;
};


#endif
