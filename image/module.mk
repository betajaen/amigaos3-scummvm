MODULE := image

MODULE_OBJS := \
	bmp.o \
	cel_3do.o \
	gif.o \
	iff.o \
	jpeg.o \
	pcx.o \
	pict.o \
	png.o \
	tga.o \
	codecs/bmp_raw.o \
	codecs/cdtoons.o \
	codecs/cinepak.o \
	codecs/codec.o \
	codecs/hlz.o \
	codecs/indeo3.o \
	codecs/indeo4.o \
	codecs/indeo5.o \
	codecs/jyv1.o \
	codecs/mjpeg.o \
	codecs/msrle.o \
	codecs/msrle4.o \
	codecs/msvideo1.o \
	codecs/qtrle.o \
	codecs/rpza.o \
	codecs/smc.o \
	codecs/truemotion1.o \
	codecs/xan.o \
	codecs/indeo/indeo.o \
	codecs/indeo/indeo_dsp.o \
	codecs/indeo/mem.o \
	codecs/indeo/vlc.o

ifdef USE_MPEG2
MODULE_OBJS += \
	codecs/mpeg.o
endif

ifdef USE_SVQ1
MODULE_OBJS += \
	codecs/svq1.o
endif

# Include common rules
include $(srcdir)/rules.mk
