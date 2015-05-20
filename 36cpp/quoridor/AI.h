//  Board game ``Quoridor''
//  Copyright (C) 2003  Petr Kadlec <mormegil@centrum.cz>
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

#ifndef AIH
#define AIH

#include "GameCore.h"

class Player_AI : public Player {
public:
        unsigned search_depth;
        unsigned long search_time;

        Player_AI() : search_depth(2), search_time(20000) { }
        virtual ::Move* choose_move(const GameState &gs);
};

float static_evaluator(const GameState &gs);
float AI_analyse(const GameState &gs);

#endif

