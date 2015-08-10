#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Utils.h"

void initPlayerInput(void);

glm::mat4 updatePlayerView(Uint32 msLapsed);

void checkForPlayerInput(void);
char userQuit(void);

glm::vec3 getPlayerLocation(void);

#endif // PLAYER_H_INCLUDED
