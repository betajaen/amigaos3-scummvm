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

#include "args.h"

#include <proto/dos.h>
#include <proto/exec.h>
#include <proto/graphics.h>
#include <proto/intuition.h>
#include <proto/icon.h>

#include <workbench/startup.h>

AmigaOS3Args g_AmigaOS3Args;

AmigaOS3Args::AmigaOS3Args() {
	graphicsArch = Native;
	isWorkbenchWindow = false;
	isWorkbenchClosed = false;
	width = 0;
	height = 0;
}

AmigaOS3Args::~AmigaOS3Args() {

}

static void TryParseBool(struct DiskObject *diskObject, STRPTR name, bool &out_Value) {
	STRPTR value = (STRPTR) FindToolType(diskObject->do_ToolTypes, name);
	if (value) {
		Common::parseBool(Common::String(value), out_Value);
	}
}

static void TryParseUInt16(struct DiskObject *diskObject, STRPTR name, uint16 &out_Value) {
	STRPTR value = (STRPTR)FindToolType(diskObject->do_ToolTypes, name);
	// TODO
}

static void TryParseString(struct DiskObject *diskObject, STRPTR name, Common::String &out_Value) {
	STRPTR value = (STRPTR)FindToolType(diskObject->do_ToolTypes, name);
	// TODO
}

static void TryParseGraphicsArch(struct DiskObject *diskObject, STRPTR name, AmigaOS3Args::GraphicsArch &out_Value) {
	STRPTR value = (STRPTR)FindToolType(diskObject->do_ToolTypes, name);
	// TODO
}

bool AmigaOS3Args::parse(int argcWb, char const *argvWb[]) {

	if (argcWb == 0) {
		// Started from Workbench
		struct WBStartup *wbStartup = (struct WBStartup *)argvWb;

		// Process Tooltypes.
		struct DiskObject *diskObject = GetDiskObject((char *)wbStartup->sm_ArgList[0].wa_Name);

		if (diskObject != NULL) {

			TryParseBool(diskObject, "CLOSE_WORKBENCH", isWorkbenchClosed);
			TryParseBool(diskObject, "WINDOW", isWorkbenchWindow);
			TryParseUInt16(diskObject, "WIDTH", width);
			TryParseUInt16(diskObject, "HEIGHT", height);
			TryParseGraphicsArch(diskObject, "ARCH", graphicsArch);

			FreeDiskObject(diskObject);
		}

	}
	
}
