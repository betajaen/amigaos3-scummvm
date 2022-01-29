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

#ifndef AMIGAOS3_RTG_GRAPHICS_H
#define AMIGAOS3_RTG_GRAPHICS_H

#include "common/system.h"

class AmigaOS3RTGGraphics {

public:
	AmigaOS3RTGGraphics();
	~AmigaOS3RTGGraphics();

	bool init();

	void shutdown();

	int hasFeature(OSystem::Feature f);

	bool setFeatureState(OSystem::Feature f, bool enable);

	int getFeatureState(OSystem::Feature f);

	const OSystem::GraphicsMode *getSupportedGraphicsModes() const;

	int getDefaultGraphicsMode() const;

	bool setGraphicsMode(int mode, uint flags);

	int getGraphicsMode() const;

	void initSize(uint width, uint height, const Graphics::PixelFormat *format);

	void initSizeHint(const Graphics::ModeList &modes);

	int getScreenChangeID() const;

	void beginGFXTransaction();

	OSystem::TransactionError endGFXTransaction();

	int16 getHeight();

	int16 getWidth();

	PaletteManager *getPaletteManager();

	void copyRectToScreen(const void *buf, int pitch, int x, int y, int w, int h);

	Graphics::Surface *lockScreen();

	void unlockScreen();

	void fillScreen(uint32 col);

	void updateScreen();

	void setShakePos(int shakeXOffset, int shakeYOffset);

	void setFocusRectangle(const Common::Rect &rect);

	void clearFocusRectangle();

	void showOverlay();

	void hideOverlay();

	bool isOverlayVisible() const;

	Graphics::PixelFormat getOverlayFormat() const;

	void clearOverlay();

	void grabOverlay(Graphics::Surface &surface);

	void copyRectToOverlay(const void *buf, int pitch, int x, int y, int w, int h);

	int16 getOverlayHeight();

	int16 getOverlayWidth();

	bool showMouse(bool visible);

	bool lockMouse(bool lock);

	void warpMouse(int x, int y);

	void setMouseCursor(const void *buf, uint w, uint h, int hotspotX, int hotspotY, uint32 keycolor, bool dontScale = false, const Graphics::PixelFormat *format = nullptr);

	void setCursorPalette(const byte *colors, uint start, uint num);

protected:
};

#endif
