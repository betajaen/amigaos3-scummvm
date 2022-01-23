#!/usr/bin/env python
# encoding: utf-8
import sys
import re
import os
import zipfile

PROCESSOR_OPTIONS = ('030', '040', '060')
ARCH_OPTIONS = ('aga', 'rtg')
ENGINE_OPTIONS = ('scumm', 'scumm78', 'agos')

def build(processor, arch, engine):
	print('Building ' + engine + ' for amigaos3/' + processor + '/' + arch)

def buildAll():
	print('Building all')

	for processor in PROCESSOR_OPTIONS:
		for arch in ARCH_OPTIONS:
			for engine in ENGINE_OPTIONS:
				build(processor, arch, engine)


def printUsage():
	print('===============================')
	print(' AmigaOS3 Configuration Script')
	print('===============================')
	print('Usage:')
	print('build-engine.py <processor> <arch> <engine>')
	print('build-engine.py all')
	print('    processor: ' + ', '.join(PROCESSOR_OPTIONS))
	print('    arch: ' + ', '.join(ARCH_OPTIONS))
	print('    engine: ' + ', '.join(ENGINE_OPTIONS))

def main():

	if len(sys.argv) == 2:
		if sys.argv[1] == 'all':
			buildAll()
			return
		printUsage()
		return

	if len(sys.argv) != 4:
		printUsage()
		return

	processor = sys.argv[1]
	arch = sys.argv[2]
	engine = sys.argv[3]

	validProcessor = False
	validArch = False
	validEngine = False

	for processorOption in PROCESSOR_OPTIONS:
		if processorOption == processor:
			validProcessor = True
			break

	for archOption in ARCH_OPTIONS:
		if archOption == arch:
			validArch = True
			break

	for engineOption in ENGINE_OPTIONS:
		if engineOption == engine:
			validEngine = True
			break

	if validProcessor == False:
		print('Error\nprocessor can only be one of these: ' + ', '.join(PROCESSOR_OPTIONS))
		return
		
	if validArch == False:
		print('Error\narch can only be one of these: ' + ', '.join(ARCH_OPTIONS))
		return
		
	if validEngine == False:
		print('Error\nengine can only be one of these: ' + ', '.join(ENGINE_OPTIONS))
		return

	build(processor, arch, engine)

if __name__ == '__main__':
	sys.exit(main())
