General Usage
=============


Compiler setup
---------------

Follow the instructions to set up amiga-gcc within Linux
	https://github.com/bebbo/amiga-gcc

Ensure the Amiga GCC compiler is within the path:
	export PATH="/opt/amiga/bin:$PATH"


ScummVM building (Manual)
-------------------------

	./configure --host=amigaos3 --disable-all-engines --enable-engine=scumm --amigaos3-processor=060 --amigaos3-arch=rtg --enable-release
	make amigaos3 -j16
