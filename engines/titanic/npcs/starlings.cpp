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

#include "titanic/npcs/starlings.h"

namespace Titanic {

BEGIN_MESSAGE_MAP(CStarlings, CCharacter)
	ON_MESSAGE(EnterViewMsg)
	ON_MESSAGE(StatusChangeMsg)
END_MESSAGE_MAP()

bool CStarlings::_dead;

CStarlings::CStarlings() : CCharacter() {
}

void CStarlings::save(SimpleFile *file, int indent) {
	file->writeNumberLine(1, indent);
	file->writeNumberLine(_dead, indent);

	CCharacter::save(file, indent);
}

void CStarlings::load(SimpleFile *file) {
	file->readNumber();
	_dead = file->readNumber();

	CCharacter::load(file);
}

bool CStarlings::EnterViewMsg(CEnterViewMsg *msg) {
	if (_dead)
		// Tis but a flesh wound
		setVisible(false);
	else
		// Repeatedly play the starlings flying
		playMovie(MOVIE_REPEAT);
	return true;
}

bool CStarlings::StatusChangeMsg(CStatusChangeMsg *msg) {
	// I'm not dead.. I'm getting better.
	_dead = msg->_newStatus == 1;
	setVisible(!_dead);
	return true;
}

} // End of namespace Titanic
