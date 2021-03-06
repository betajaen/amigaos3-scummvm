/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef AGS_ENGINE_AC_GLOBAL_WALKABLE_AREA_H
#define AGS_ENGINE_AC_GLOBAL_WALKABLE_AREA_H

namespace AGS3 {

int   GetScalingAt(int x, int y);
void  SetAreaScaling(int area, int min, int max);
void  RemoveWalkableArea(int areanum);
void  RestoreWalkableArea(int areanum);
// Gets walkable area at the given room coordinates;
// if area is disabled or non-existing, returns 0 (no area)
int   GetWalkableAreaAtRoom(int x, int y);
// Gets walkable area at the given screen coordinates
// if area is disabled or non-existing, returns 0 (no area)
int   GetWalkableAreaAtScreen(int x, int y);

} // namespace AGS3

#endif
