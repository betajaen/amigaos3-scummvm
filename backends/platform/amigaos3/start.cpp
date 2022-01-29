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

/* Permissive due to:
	"Backend files may #define FORBIDDEN_SYMBOL_ALLOW_ALL if they have to
	access functions like fopen, fread etc."
*/
#define FORBIDDEN_SYMBOL_ALLOW_ALL

#include <stdio.h>

#include <proto/dos.h>
#include <proto/exec.h>
#include <proto/graphics.h>
#include <proto/icon.h>
#include <proto/intuition.h>

#include <workbench/startup.h>

#include "common/config-manager.h"

struct CxBase *CxBase = NULL;
struct Library *CyberGfxBase = NULL;
struct GfxBase *GfxBase = NULL;
struct Library *IconBase = NULL;
struct IntuitionBase *IntuitionBase = NULL;
struct KeymapBase *KeymapBase = NULL;
struct RealTimeBase *RealTimeBase = NULL;

static void unload_libraries(void) {
	if (CxBase != NULL) {
		CloseLibrary((struct Library *)CxBase);
		CxBase = NULL;
	}

	if (CyberGfxBase != NULL) {
		CloseLibrary((struct Library *)CyberGfxBase);
		CyberGfxBase = NULL;
	}

	if (GfxBase != NULL) {
		CloseLibrary((struct Library *)GfxBase);
		GfxBase = NULL;
	}

	if (IconBase != NULL) {
		CloseLibrary((struct Library *)IconBase);
		IconBase = NULL;
	}

	if (IntuitionBase != NULL) {
		CloseLibrary((struct Library *)IntuitionBase);
		IntuitionBase = NULL;
	}

	if (KeymapBase != NULL) {
		CloseLibrary((struct Library *)KeymapBase);
		KeymapBase = NULL;
	}

	if (RealTimeBase != NULL) {
		CloseLibrary((struct Library *)RealTimeBase);
		RealTimeBase = NULL;
	}

	////////////// TaskLocalTimer::destroyInstance();
}

static void load_libraries(void) {
	atexit(unload_libraries);

	CxBase = (struct CxBase *)OpenLibrary("commodities.library", 0);
	if (CxBase == NULL) {
		fprintf(stderr, "Unable to load commodities.library!\n");
		exit(EXIT_FAILURE);
	}

	GfxBase = (struct GfxBase *)OpenLibrary("graphics.library", 0);
	if (GfxBase == NULL) {
		fprintf(stderr, "Unable to load graphics.library!\n");
		exit(EXIT_FAILURE);
	}

	IconBase = (struct Library *)OpenLibrary("icon.library", 0);
	if (IconBase == NULL) {
		fprintf(stderr, "Unable to load icon.library!\n");
		exit(EXIT_FAILURE);
	}

	IntuitionBase = (struct IntuitionBase *)OpenLibrary("intuition.library", 0);
	if (IntuitionBase == NULL) {
		fprintf(stderr, "Unable to load intuition.library!\n");
		exit(EXIT_FAILURE);
	}

	KeymapBase = (struct KeymapBase *)OpenLibrary("keymap.library", 0);
	if (KeymapBase == NULL) {
		fprintf(stderr, "Unable to load keymap.library!\n");
		exit(EXIT_FAILURE);
	}

	RealTimeBase = (struct RealTimeBase *)OpenLibrary("realtime.library", 0);
	if (RealTimeBase == NULL) {
		fprintf(stderr, "Unable to load realtime.library!\n");
		exit(EXIT_FAILURE);
	}
}

extern bool default_timer;

extern "C" int scummvm_main(int argc, const char *const argv[]);
extern class AmigaOS3System *g_AmigaOS3System;
extern bool createAmigaOS3System(void *tooltypes, int argcWb, char const *argvWb[]);
extern void destroyAmigaOS3System();


__stdargs int main(int argcWb, char const *argvWb[])
{
	int res = 0;
	load_libraries();

	if (createAmigaOS3System(NULL, argcWb, argvWb)) {
		res = scummvm_main(0, NULL);
		destroyAmigaOS3System();
	}

	unload_libraries();

	return res;
}
