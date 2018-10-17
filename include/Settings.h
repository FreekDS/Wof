#ifndef TESTING_SETTINGS_H
#define TESTING_SETTINGS_H

#include "GameState.h"

class Settings : public GameState{
private:

public:
    void update() override;
    void render() override;
    ~Settings() override;
};


#endif //TESTING_SETTINGS_H
