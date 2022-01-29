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

#include "native.h"

#include <proto/dos.h>
#include <proto/exec.h>
#include <proto/graphics.h>
#include <proto/intuition.h>

AmigaOS3NativeGraphics::AmigaOS3NativeGraphics() {
}

AmigaOS3NativeGraphics::~AmigaOS3NativeGraphics() {
}

void AmigaOS3NativeGraphics::init() {
}

void AmigaOS3NativeGraphics::shutdown() {
}

int AmigaOS3NativeGraphics::hasFeature(OSystem::Feature f) {
	
	return -1;
}

bool AmigaOS3NativeGraphics::setFeatureState(OSystem::Feature f, bool enable) {
	return false;
}

int AmigaOS3NativeGraphics::getFeatureState(OSystem::Feature f) {
	return -1;
}

const OSystem::GraphicsMode* AmigaOS3NativeGraphics::getSupportedGraphicsModes() const{
	return NULL;
}

int AmigaOS3NativeGraphics::getDefaultGraphicsMode() const {
	return 0;
}

bool AmigaOS3NativeGraphics::setGraphicsMode(int mode, uint flags) {
	return false;
}

int AmigaOS3NativeGraphics::getGraphicsMode() const{
	return 0;
}

void AmigaOS3NativeGraphics::initSize(uint width, uint height, const Graphics::PixelFormat *format){
}

void AmigaOS3NativeGraphics::initSizeHint(const Graphics::ModeList &modes){
}

int AmigaOS3NativeGraphics::getScreenChangeID() const{
	return 0;
}

void AmigaOS3NativeGraphics::beginGFXTransaction(){
}

OSystem::TransactionError AmigaOS3NativeGraphics::endGFXTransaction() {
	return OSystem::TransactionError::kTransactionFormatNotSupported;
}

int16 AmigaOS3NativeGraphics::getHeight(){
	return 0;
}

int16 AmigaOS3NativeGraphics::getWidth(){
	return 0;
}

PaletteManager* AmigaOS3NativeGraphics::getPaletteManager(){
	return NULL;
}

void AmigaOS3NativeGraphics::copyRectToScreen(const void *buf, int pitch, int x, int y, int w, int h){
}

Graphics::Surface *AmigaOS3NativeGraphics::lockScreen(){
	return NULL;
}

void AmigaOS3NativeGraphics::unlockScreen(){
}

void AmigaOS3NativeGraphics::fillScreen(uint32 col){
}

void AmigaOS3NativeGraphics::updateScreen(){
}

void AmigaOS3NativeGraphics::setShakePos(int shakeXOffset, int shakeYOffset){
}

void AmigaOS3NativeGraphics::setFocusRectangle(const Common::Rect &rect){
}

void AmigaOS3NativeGraphics::clearFocusRectangle(){
}

void AmigaOS3NativeGraphics::showOverlay(){
}

void AmigaOS3NativeGraphics::hideOverlay(){
}

bool AmigaOS3NativeGraphics::isOverlayVisible() const{
	return false;
}

Graphics::PixelFormat AmigaOS3NativeGraphics::getOverlayFormat() const{
	return Graphics::PixelFormat();
}

void AmigaOS3NativeGraphics::clearOverlay(){
}

void AmigaOS3NativeGraphics::grabOverlay(Graphics::Surface &surface){
}

void AmigaOS3NativeGraphics::copyRectToOverlay(const void *buf, int pitch, int x, int y, int w, int h){
}

int16 AmigaOS3NativeGraphics::getOverlayHeight(){
	return 0;
}

int16 AmigaOS3NativeGraphics::getOverlayWidth(){
	return 0;
}

bool AmigaOS3NativeGraphics::showMouse(bool visible){
	return false;
}

bool AmigaOS3NativeGraphics::lockMouse(bool lock){
	return false;
}

void AmigaOS3NativeGraphics::warpMouse(int x, int y){
}

void AmigaOS3NativeGraphics::setMouseCursor(const void *buf, uint w, uint h, int hotspotX, int hotspotY, uint32 keycolor, bool dontScale, const Graphics::PixelFormat *format){
}

void AmigaOS3NativeGraphics::setCursorPalette(const byte *colors, uint start, uint num){
}
