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

#ifndef TWINE_SCRIPTLIFE_H
#define TWINE_SCRIPTLIFE_H

#include "common/scummsys.h"

namespace TwinE {

// SCENE_SIZE_MAX
#define MAX_TARGET_ACTOR_DISTANCE 0x7D00

class TwinEEngine;

class ScriptLife {
private:
	TwinEEngine *_engine;

public:
	ScriptLife(TwinEEngine *engine);

	/**
	 * Process actor life script
	 * @param actorIdx Current processed actor index
	 */
	void processLifeScript(int32 actorIdx);
};

} // namespace TwinE

#endif
