MODULE := video

MODULE_OBJS := \
	avi_decoder.o \
	coktel_decoder.o \
	dxa_decoder.o \
	flic_decoder.o \
	hnm_decoder.o \
	mpegps_decoder.o \
	mve_decoder.o \
	psx_decoder.o \
	smk_decoder.o \
	video_decoder.o

ifdef USE_BINK
MODULE_OBJS += \
	bink_decoder.o
endif

ifdef USE_THEORADEC
MODULE_OBJS += \
	theora_decoder.o
endif

ifdef USE_3DO
MODULE_OBJS += \
	3do_decoder.o
endif

ifdef USE_QUICKTIME
MODULE_OBJS += \
	qt_decoder.o
endif

# Include common rules
include $(srcdir)/rules.mk
