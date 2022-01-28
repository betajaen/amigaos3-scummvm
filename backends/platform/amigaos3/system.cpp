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


AmigaOS3System::AmigaOS3System() {
}

AmigaOS3System::~AmigaOS3System() {
}

void AmigaOS3System::init() {
}

void AmigaOS3System::initBackend() {
}

void AmigaOS3System::engineInit() {
}

void AmigaOS3System::engineDone() {
}

bool AmigaOS3System::hasFeature() {
	return false;
}

void AmigaOS3System::setFeatureState() {
}

bool AmigaOS3System::getFeatureState() {
	return false;
}

const GraphicsMode *AmigaOS3System::getSupportedGraphicsModes() const {
	return NULL;
}

int AmigaOS3System::getDefaultGraphicsMode() const {
	return 0;
}

bool AmigaOS3System::setGraphicsMode(int mode, uint flags) {
	return false;
}

int AmigaOS3System::getGraphicsMode() const {
	return 0;
}

void AmigaOS3System::initSize(uint width, uint height, const Graphics::PixelFormat *format) {
}

void AmigaOS3System::initSizeHint(const Graphics::ModeList &modes) {
}

int AmigaOS3System::getScreenChangeID() const {
	return 0;
}

void AmigaOS3System::beginGFXTransaction() {
}

TransactionError AmigaOS3System::endGFXTransaction() {
	return kTransactionFormatNotSupported;
}

int16 AmigaOS3System::getHeight() {
	return 0;
}

int16 AmigaOS3System::getWidth() {
	return 0;
}

PaletteManager *AmigaOS3System::getPaletteManager() {
	return nullptr;
}

void AmigaOS3System::copyRectToScreen(const void *buf, int pitch, int x, int y, int w, int h) {
}

Graphics::Surface *AmigaOS3System::lockScreen() {
	return NULL;
}

void AmigaOS3System::unlockScreen() {
}

void AmigaOS3System::fillScreen(uint32 col) {
}

void AmigaOS3System::updateScreen() {
}

void AmigaOS3System::setShakePos(int shakeXOffset, int shakeYOffset) {
}

void AmigaOS3System::setFocusRectangle(const Common::Rect &rect) {
}

void AmigaOS3System::clearFocusRectangle() {
}

void AmigaOS3System::showOverlay() {
}

void AmigaOS3System::hideOverlay() {
}

bool AmigaOS3System::isOverlayVisible() const {
	return false;
}

Graphics::PixelFormat AmigaOS3System::getOverlayFormat() const {
	return Graphics::PixelFormat();
}

void AmigaOS3System::clearOverlay() {
}

void AmigaOS3System::grabOverlay(Graphics::Surface &surface) {
}

void AmigaOS3System::copyRectToOverlay(const void *buf, int pitch, int x, int y, int w, int h) {
}

int16 AmigaOS3System::getOverlayHeight() {
	return int16();
}

int16 AmigaOS3System::getOverlayWidth() {
	return int16();
}

bool AmigaOS3System::showMouse(bool visible) {
	return false;
}

bool AmigaOS3System::lockMouse(bool lock) {
	return false;
}

void AmigaOS3System::warpMouse(int x, int y) {
}

void AmigaOS3System::setMouseCursor(const void *buf, uint w, uint h, int hotspotX, int hotspotY, uint32 keycolor, bool dontScale, const Graphics::PixelFormat *format) {
}

void AmigaOS3System::setCursorPalette(const byte *colors, uint start, uint num) {
}

uint32 AmigaOS3System::getMillis(bool skipRecord) {
	return uint32();
}

void AmigaOS3System::delayMillis(uint msecs) {
}

void AmigaOS3System::getTimeAndDate(TimeDate &td, bool skipRecord) const {
}

MutexRef AmigaOS3System::createMutex() {
	return MutexRef();
}

void AmigaOS3System::lockMutex(MutexRef mutex) {
}

void AmigaOS3System::unlockMutex(MutexRef mutex) {
}

void AmigaOS3System::deleteMutex(MutexRef mutex) {
}

Audio::Mixer *AmigaOS3System::getMixer() {
	return nullptr;
}

void AmigaOS3System::quit() {
}

void AmigaOS3System::fatalError() {
}

void AmigaOS3System::displayMessageOnOSD(const Common::U32String &msg) {
}

void AmigaOS3System::displayActivityIconOnOSD(const Graphics::Surface *icon) {
}

void AmigaOS3System::logMessage(LogMessageType::Type type, const char *message) {
}

void AmigaOS3System::messageBox(LogMessageType::Type type, const char *message) {
}

bool AmigaOS3System::isConnectionLimited() {
	return false;
}
