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

#include "system.h"
#include "graphics/native.h"
#include "graphics/rtg.h"
#include "../args.h"

AmigaOS3Args g_AmigaOS3Args;

template<typename TAmigaGraphicsArch>
class AmigaOS3System : public OSystem {

public:

	AmigaOS3System()
		: OSystem()
	{

	}

	virtual ~AmigaOS3System() {
		_graphics.shutdown();
	}

	virtual void init() override {
	}

	virtual void initBackend() override {
		_graphics.init();
	}

	virtual void engineInit() override {

	}

	virtual void engineDone() override {

	}

	virtual bool hasFeature(Feature f) override {
		int res = _graphics.hasFeature(f);

		if (res != -1) {
			return res == 1;
		}

		switch (f) {
			OSystem::Feature::kFeatureSystemBrowserDialog : {
				return true;
			}
			default:
				return false;
		}
	}

	virtual void setFeatureState(Feature f, bool enable) override {
		_graphics.setFeatureState(f, enable);
	}

	virtual bool getFeatureState(Feature f) override {
		int res = _graphics.getFeatureState(f);

		if (res != -1) {
			return res == 1;
		}

		return false;
	}

	virtual const GraphicsMode *getSupportedGraphicsModes() const override {
		return _graphics.getSupportedGraphicsModes();
	}

	virtual int getDefaultGraphicsMode() const override {
		return _graphics.getDefaultGraphicsMode();
	}

	virtual bool setGraphicsMode(int mode, uint flags) override {
		return _graphics.setGraphicsMode(mode, flags);
	}

	virtual int getGraphicsMode() const override {
		return _graphics.getGraphicsMode();
	}

	virtual void initSize(uint width, uint height, const Graphics::PixelFormat *format) override {
		_graphics.initSize(width, height, format);
	}

	virtual void initSizeHint(const Graphics::ModeList &modes) override {
		_graphics.initSizeHint(modes);
	}

	virtual int getScreenChangeID() const override {
		_graphics.getScreenChangeID();
	}

	virtual void beginGFXTransaction() override {
		_graphics.beginGFXTransaction();
	}

	virtual TransactionError endGFXTransaction() override {
		return _graphics.endGFXTransaction();
	}

	virtual int16 getHeight() override {
		return _graphics.getHeight();
	}

	virtual int16 getWidth() override {
		return _graphics.getWidth();
	}

	virtual PaletteManager *getPaletteManager() override {
		return _graphics.getPaletteManager();
	}

	virtual void copyRectToScreen(const void *buf, int pitch, int x, int y, int w, int h) override {
		_graphics.copyRectToScreen(buf, pitch, x, y, w, h);
	}

	virtual Graphics::Surface *lockScreen() override {
		return _graphics.lockScreen();
	}

	virtual void unlockScreen() override {
		_graphics.unlockScreen();
	}

	virtual void fillScreen(uint32 col) override {
		_graphics.fillScreen(col);
	}

	virtual void updateScreen() override {
		_graphics.updateScreen();
	}

	virtual void setShakePos(int shakeXOffset, int shakeYOffset) override {
		_graphics.setShakePos(shakeXOffset, shakeYOffset);
	}

	virtual void setFocusRectangle(const Common::Rect &rect) override {
		// No Feature
	}

	virtual void clearFocusRectangle() override {
		// No Feature
	}

	virtual void showOverlay() override {
		_graphics.showOverlay();
	}

	virtual void hideOverlay() override {
		_graphics.hideOverlay();
	}

	virtual bool isOverlayVisible() const override {
		return _graphics.isOverlayVisible();
	}

	virtual Graphics::PixelFormat getOverlayFormat() const override {
		return _graphics.getOverlayFormat();
	}

	virtual void clearOverlay() override {
		_graphics.clearOverlay();
	}

	virtual void grabOverlay(Graphics::Surface &surface) override {
		_graphics.grabOverlay(surface);
	}

	virtual void copyRectToOverlay(const void *buf, int pitch, int x, int y, int w, int h) override {
		_graphics.copyRectToOverlay(buf, pitch, x, y, w, h);
	}

	virtual int16 getOverlayHeight() override {
		return _graphics.getOverlayHeight();
	}

	virtual int16 getOverlayWidth() override {
		return _graphics.getOverlayWidth();
	}

	virtual bool showMouse(bool visible) override {
		return _graphics.showMouse(visible);
	}

	virtual bool lockMouse(bool lock) override {
		return _graphics.lockMouse(lock);
	}

	virtual void warpMouse(int x, int y) override {
		_graphics.warpMouse(x, y);
	}

	virtual void setMouseCursor(const void *buf, uint w, uint h, int hotspotX, int hotspotY, uint32 keycolor, bool dontScale = false, const Graphics::PixelFormat *format = nullptr) override {
		setMouseCursor(buf, w, h, hotspotX, hotspotY, keycolor, dontScale, format);
	}

	virtual void setCursorPalette(const byte *colors, uint start, uint num) override {
		setCursorPalette(colors, start, num);
	}

	virtual uint32 getMillis(bool skipRecord) override {
		// TODO
		return 0;
	}

	virtual void delayMillis(uint msecs) override {
		// TODO
	}

	virtual void getTimeAndDate(TimeDate &td, bool skipRecord) const override {
		// TODO
	}

	virtual MutexRef createMutex() override {
		// TODO
		return MutexRef();
	}

	virtual void lockMutex(MutexRef mutex) override {
		// TODO
	}

	virtual void unlockMutex(MutexRef mutex) override {
		// TODO
	}

	virtual void deleteMutex(MutexRef mutex) override {
		// TODO
	}

	virtual Audio::Mixer* getMixer() override {
		// TODO
		return NULL;
	}

	virtual void quit() override {
		// TODO
	}

	virtual void fatalError() override {
		// TODO
	}

	virtual void displayMessageOnOSD(const Common::U32String& msg) override {
		// TODO
	}

	virtual void displayActivityIconOnOSD(const Graphics::Surface* icon) override {
		// TODO
	}

	virtual void logMessage(LogMessageType::Type type, const char* message) override {
		// TODO
	}

	virtual void messageBox(LogMessageType::Type type, const char* message) override {
		// TODO
	}

	virtual bool isConnectionLimited() override {
		return true;
	}

protected:
	TAmigaGraphicsArch _graphics;
};

void parseArguments(AmigaOS3Args& args, void *tooltypes, int argcWb, char const *argvWb[]) {
	// TODO
}

bool createAmigaOS3System() {
	assert(g_system);

	switch (g_AmigaOS3Args.graphicsArch) {
		case AmigaOS3Args::RTG:
			g_system = new AmigaOS3System<AmigaOS3RTGGraphics>();
		return true;
		default:
		case AmigaOS3Args::Native:
			g_system = new AmigaOS3System<AmigaOS3NativeGraphics>();
		return true;
	}

	return false;
}

void destroyAmigaOS3System() {

	if (g_system != NULL) {

		switch (g_AmigaOS3Args.graphicsArch) {
		case AmigaOS3Args::RTG:
			delete static_cast<AmigaOS3System<AmigaOS3RTGGraphics>*>(g_system);
			break;
		default:
		case AmigaOS3Args::Native:
			delete static_cast<AmigaOS3System<AmigaOS3NativeGraphics> *>(g_system);
			break;
		}

		g_system = NULL;
	}
}
