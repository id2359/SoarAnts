#ifndef SQUARE_ID_WME_H
#define SQUARE_ID_WME_H

#include <vector>

#include "sml_Client.h"
#include "Square.h"

using namespace std;
using namespace sml;

struct SquareIdWME {
    Identifier *root;
    StringElement *is_visible;
    StringElement *is_water;
    StringElement *is_hill;
    StringElement *is_food;
    StringElement *is_destination;
    IntElement *ant_player_id;
    IntElement *hill_player_id;

    // Assume max of four players.
    vector<Identifier *> player_roots;

    bool was_visible;
    bool was_water;
    bool was_hill;
    bool was_food;
    bool was_destination;
    int was_ant;
    int was_hill_player;

    void Update(const Square &square);
    SquareIdWME(
            Agent *agent,
            Identifier *root,
            StringElement *is_visible,
            StringElement *is_water,
            StringElement *is_hill,
            StringElement *is_food,
            StringElement *was_destination,
            IntElement *ant_player_id,
            IntElement *hill_player_id);
};
#endif
