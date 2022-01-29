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

#include "rtg.h"

#include <proto/dos.h>
#include <proto/exec.h>
#include <proto/graphics.h>
#include <proto/intuition.h>

extern Library *CyberGfxBase;

AmigaOS3RTGGraphics::AmigaOS3RTGGraphics() {
}

AmigaOS3RTGGraphics::~AmigaOS3RTGGraphics() {
}

void AmigaOS3RTGGraphics::init() {
	// CyberGfxBase = (struct Library *)OpenLibrary("cybergraphics.library", 0);
	// if (CyberGfxBase == NULL) {
	// 	fprintf(stderr, "Unable to load cybergraphics.library, CGX not available.\n");
	// }
}

void AmigaOS3RTGGraphics::shutdown() {
}

int AmigaOS3RTGGraphics::hasFeature(OSystem::Feature f) {
	return -1;
}

bool AmigaOS3RTGGraphics::setFeatureState(OSystem::Feature f, bool enable) {
	return false;
}

int AmigaOS3RTGGraphics::getFeatureState(OSystem::Feature f) {
	return -1;
}

const OSystem::GraphicsMode *AmigaOS3RTGGraphics::getSupportedGraphicsModes() const {
	return NULL;
}

int AmigaOS3RTGGraphics::getDefaultGraphicsMode() const {
	return 0;
}

bool AmigaOS3RTGGraphics::setGraphicsMode(int mode, uint flags) {
	return false;
}

int AmigaOS3RTGGraphics::getGraphicsMode() const {
	return 0;
}

void AmigaOS3RTGGraphics::initSize(uint width, uint height, const Graphics::PixelFormat *format) {
}

void AmigaOS3RTGGraphics::initSizeHint(const Graphics::ModeList &modes) {
}

int AmigaOS3RTGGraphics::getScreenChangeID() const {
	return 0;
}

void AmigaOS3RTGGraphics::beginGFXTransaction() {
}

OSystem::TransactionError AmigaOS3RTGGraphics::endGFXTransaction() {
	return OSystem::TransactionError::kTransactionFormatNotSupported;
}

int16 AmigaOS3RTGGraphics::getHeight() {
	return 0;
}

int16 AmigaOS3RTGGraphics::getWidth() {
	return 0;
}

PaletteManager *AmigaOS3RTGGraphics::getPaletteManager() {
	return NULL;
}

void AmigaOS3RTGGraphics::copyRectToScreen(const void *buf, int pitch, int x, int y, int w, int h) {
}

Graphics::Surface *AmigaOS3RTGGraphics::lockScreen() {
	return NULL;
}

void AmigaOS3RTGGraphics::unlockScreen() {
}

void AmigaOS3RTGGraphics::fillScreen(uint32 col) {
}

void AmigaOS3RTGGraphics::updateScreen() {
}

void AmigaOS3RTGGraphics::setShakePos(int shakeXOffset, int shakeYOffset) {
}

void AmigaOS3RTGGraphics::setFocusRectangle(const Common::Rect &rect) {
}

void AmigaOS3RTGGraphics::clearFocusRectangle() {
}

void AmigaOS3RTGGraphics::showOverlay() {
}

void AmigaOS3RTGGraphics::hideOverlay() {
}

bool AmigaOS3RTGGraphics::isOverlayVisible() const {
	return false;
}

Graphics::PixelFormat AmigaOS3RTGGraphics::getOverlayFormat() const {
	return Graphics::PixelFormat();
}

void AmigaOS3RTGGraphics::clearOverlay() {
}

void AmigaOS3RTGGraphics::grabOverlay(Graphics::Surface &surface) {
}

void AmigaOS3RTGGraphics::copyRectToOverlay(const void *buf, int pitch, int x, int y, int w, int h) {
}

int16 AmigaOS3RTGGraphics::getOverlayHeight() {
	return 0;
}

int16 AmigaOS3RTGGraphics::getOverlayWidth() {
	return 0;
}

bool AmigaOS3RTGGraphics::showMouse(bool visible) {
	return false;
}

bool AmigaOS3RTGGraphics::lockMouse(bool lock) {
	return false;
}

void AmigaOS3RTGGraphics::warpMouse(int x, int y) {
}

void AmigaOS3RTGGraphics::setMouseCursor(const void *buf, uint w, uint h, int hotspotX, int hotspotY, uint32 keycolor, bool dontScale, const Graphics::PixelFormat *format) {
}

void AmigaOS3RTGGraphics::setCursorPalette(const byte *colors, uint start, uint num) {
}
