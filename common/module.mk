MODULE := common

MODULE_OBJS := \
	achievements.o \
	archive.o \
	base-str.o \
	config-manager.o \
	coroutines.o \
	dcl.o \
	debug.o \
	error.o \
	events.o \
	file.o \
	fs.o \
	gui_options.o \
	hashmap.o \
	iff_container.o \
	ini-file.o \
	installshield_cab.o \
	installshieldv3_archive.o \
	language.o \
	localization.o \
	macresman.o \
	memorypool.o \
	md5.o \
	mdct.o \
	mutex.o \
	osd_message_queue.o \
	path.o \
	platform.o \
	punycode.o \
	quicktime.o \
	random.o \
	rational.o \
	rendermode.o \
	sinewindows.o \
	str.o \
	stream.o \
	streamdebug.o \
	str-enc.o \
	encodings/singlebyte.o \
	system.o \
	textconsole.o \
	text-to-speech.o \
	tokenizer.o \
	translation.o \
	unarj.o \
	unicode-bidi.o \
	unzip.o \
	ustr.o \
	util.o \
	zlib.o

MODULE_OBJS += \
	cosinetables.o \
	dct.o \
	fft.o \
	rdft.o \
	sinetables.o

ifdef ENABLE_EVENTRECORDER
MODULE_OBJS += \
	recorderfile.o
endif

ifdef USE_UPDATES
MODULE_OBJS += \
	updates.o
endif

ifdef USE_LUA
MODULE_OBJS += \
	lua/double_serialization.o \
	lua/lapi.o \
	lua/lauxlib.o \
	lua/lbaselib.o \
	lua/lcode.o \
	lua/ldblib.o \
	lua/ldebug.o \
	lua/ldo.o \
	lua/lfunc.o \
	lua/lgc.o \
	lua/linit.o \
	lua/liolib.o \
	lua/llex.o \
	lua/lmathlib.o \
	lua/lmem.o \
	lua/loadlib.o \
	lua/lobject.o \
	lua/lopcodes.o \
	lua/loslib.o \
	lua/lparser.o \
	lua/lstate.o \
	lua/lstring.o \
	lua/lstrlib.o \
	lua/ltable.o \
	lua/ltablib.o \
	lua/ltm.o \
	lua/lua_persist.o \
	lua/lua_persistence_util.o \
	lua/lua_unpersist.o \
	lua/lvm.o \
	lua/lzio.o \
	lua/scummvm_file.o
endif

# Robin Begin
ifdef USE_JSON
	MODULE_OBJS += json.o
endif
ifdef USE_XML
	MODULE_OBJS += xmlparser.o
endif
ifdef USE_WINEXE
	MODULES_OBJS += \
		winexe.o \
		winexe_ne.o \
		winexe_pe.o
endif
ifdef USE_STUFFIT
	MODULES_OBJS += stuffit.o
endif
ifdef USE_UNARJ
	MODULES_OBJS += unarj.o
endif
ifdef USE_ACHIEVEMENTS
	MODULES_OBJS += achivements.o
endif
ifdef USE_WMA
	MODULES_OBJS += sinewindows.o
endif

# Robin End

# Include common rules
include $(srcdir)/rules.mk

