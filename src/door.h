//  $Id$
//
//  SuperTux -  A Jump'n Run
//  Copyright (C) 2004 Matthias Braun <matze@braunis.de
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
#ifndef __DOOR_H__
#define __DOOR_H__

#include <string>
#include "interactive_object.h"
#include "serializable.h"

class Sprite;

class LispReader;

class Door : public InteractiveObject, public Serializable
{
public:
  Door(LispReader& reader);
  virtual ~Door();

  virtual void write(LispWriter& writer);
  
  virtual void action(float elapsed_time);
  virtual void draw(DrawingContext& context);
  virtual void interaction(InteractionType type);

private:
  Sprite* sprite;
  std::string target_sector;
  std::string target_spawnpoint;
};

#endif

