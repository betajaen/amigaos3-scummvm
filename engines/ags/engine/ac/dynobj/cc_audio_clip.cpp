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

#include "ags/engine/ac/dynobj/cc_audio_clip.h"
#include "ags/shared/ac/dynobj/script_audio_clip.h"
#include "ags/shared/ac/game_setup_struct.h"

namespace AGS3 {



const char *CCAudioClip::GetType() {
	return "AudioClip";
}

int CCAudioClip::Serialize(const char *address, char *buffer, int bufsize) {
	const ScriptAudioClip *ach = (const ScriptAudioClip *)address;
	StartSerialize(buffer);
	SerializeInt(ach->id);
	return EndSerialize();
}

void CCAudioClip::Unserialize(int index, const char *serializedData, int dataSize) {
	StartUnserialize(serializedData, dataSize);
	int id = UnserializeInt();
	ccRegisterUnserializedObject(index, &_GP(game).audioClips[id], this);
}

} // namespace AGS3
