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

#ifndef AMIGAOS3_SYSTEM_H
#define AMIGAOS3_SYSTEM_H

#include "common/system.h"

class AmigaOS3System : public OSystem {

public:
	AmigaOS3System();

	virtual ~AmigaOS3System();

	virtual void init() override;

	virtual void initBackend() override;

	virtual void engineInit() override;

	virtual void engineDone() override;

	virtual bool hasFeature() override;

	virtual void setFeatureState() override;

	virtual bool getFeatureState() override;

	virtual const GraphicsMode *getSupportedGraphicsModes() const override;

	virtual int getDefaultGraphicsMode() const override;

	virtual bool setGraphicsMode(int mode, uint flags) override;

	virtual int getGraphicsMode() const override;

	virtual void initSize(uint width, uint height, const Graphics::PixelFormat *format) override;

	virtual void initSizeHint(const Graphics::ModeList &modes) override;

	virtual int getScreenChangeID() const override;

	virtual void beginGFXTransaction() override;

	virtual TransactionError endGFXTransaction() override;

	virtual int16 getHeight() override;

	virtual int16 getWidth() override;

	virtual PaletteManager *getPaletteManager() override;

	virtual void copyRectToScreen(const void *buf, int pitch, int x, int y, int w, int h) override;

	virtual Graphics::Surface *lockScreen() override;

	virtual void unlockScreen() override;

	virtual void fillScreen(uint32 col) override;

	virtual void updateScreen() override;

	virtual void setShakePos(int shakeXOffset, int shakeYOffset) override;

	virtual void setFocusRectangle(const Common::Rect &rect) override;

	virtual void clearFocusRectangle() override;

	virtual void showOverlay() override;

	virtual void hideOverlay() override;

	virtual bool isOverlayVisible() const override;

	virtual Graphics::PixelFormat getOverlayFormat() const override;

	virtual void clearOverlay() override;

	virtual void grabOverlay(Graphics::Surface &surface) override;

	virtual void copyRectToOverlay(const void *buf, int pitch, int x, int y, int w, int h) override;

	virtual int16 getOverlayHeight() override;

	virtual int16 getOverlayWidth() override;

	virtual bool showMouse(bool visible) override;

	virtual bool lockMouse(bool lock) override;

	virtual void warpMouse(int x, int y) override;

	virtual void setMouseCursor(const void *buf, uint w, uint h, int hotspotX, int hotspotY, uint32 keycolor, bool dontScale = false, const Graphics::PixelFormat *format = nullptr) override;

	virtual void setCursorPalette(const byte *colors, uint start, uint num) override;

	virtual uint32 getMillis(bool skipRecord = false) override;

	virtual void delayMillis(uint msecs) override;

	virtual void getTimeAndDate(TimeDate &td, bool skipRecord = false) const override;

	virtual MutexRef createMutex() override;

	virtual void lockMutex(MutexRef mutex) override;

	virtual void unlockMutex(MutexRef mutex) override;

	virtual void deleteMutex(MutexRef mutex) override;

	virtual Audio::Mixer *getMixer() override;

	virtual void quit() override;

	virtual void fatalError() override;

	virtual void displayMessageOnOSD(const Common::U32String &msg) override;

	virtual void displayActivityIconOnOSD(const Graphics::Surface *icon) override;

	virtual void logMessage(LogMessageType::Type type, const char *message) override;

	virtual void messageBox(LogMessageType::Type type, const char *message) override;

	virtual bool isConnectionLimited() override;
};

#endif
