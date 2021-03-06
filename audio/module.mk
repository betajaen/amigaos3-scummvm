MODULE := audio

MODULE_OBJS := \
	adlib.o \
	adlib_ms.o \
	audiostream.o \
	fmopl.o \
	mididrv.o \
	mididrv_ms.o \
	midiparser_qt.o \
	midiparser_smf.o \
	midiparser_xmidi.o \
	midiparser.o \
	midiplayer.o \
	miles_adlib.o \
	miles_midi.o \
	mixer.o \
	mpu401.o \
	mt32gm.o \
	musicplugin.o \
	null.o \
	rate.o \
	timestamp.o \
	decoders/aac.o \
	decoders/adpcm.o \
	decoders/aiff.o \
	decoders/flac.o \
	decoders/g711.o \
	decoders/iff_sound.o \
	decoders/mac_snd.o \
	decoders/mp3.o \
	decoders/qdm2.o \
	decoders/raw.o \
	decoders/voc.o \
	decoders/vorbis.o \
	decoders/wave.o \
	decoders/xa.o \
	decoders/xan_dpcm.o \
	mods/mod_xm_s3m.o \
	mods/module.o \
	mods/module_mod_xm_s3m.o \
	mods/protracker.o \
	mods/rjp1.o \
	mods/soundfx.o \
	softsynth/cms.o \
	softsynth/opl/dbopl.o \
	softsynth/opl/dosbox.o \
	softsynth/opl/mame.o \
	softsynth/fmtowns_pc98/pc98_audio.o \
	softsynth/fmtowns_pc98/pcm_common.o \
	softsynth/fmtowns_pc98/sega_audio.o \
	softsynth/fmtowns_pc98/towns_audio.o \
	softsynth/fmtowns_pc98/towns_euphony.o \
	softsynth/fmtowns_pc98/towns_pc98_driver.o \
	softsynth/fmtowns_pc98/towns_pc98_fmsynth.o \
	softsynth/fmtowns_pc98/towns_pc98_plugins.o \
	softsynth/appleiigs.o \
	softsynth/fluidsynth.o \
	softsynth/mt32.o \
	softsynth/eas.o \
	softsynth/pcspk.o \
	softsynth/sid.o \
	softsynth/wave6581.o \
	soundfont/rawfile.o \
	soundfont/rifffile.o \
	soundfont/sf2file.o \
	soundfont/synthfile.o \
	soundfont/vgmcoll.o \
	soundfont/vgminstrset.o \
	soundfont/vgmitem.o \
	soundfont/vgmsamp.o \
	soundfont/vab/psxspu.o \
	soundfont/vab/vab.o

ifndef DISABLE_NUKED_OPL
MODULE_OBJS += \
	softsynth/opl/nuked.o
endif

ifdef USE_A52
MODULE_OBJS += \
	decoders/ac3.o
endif

ifdef USE_ALSA
MODULE_OBJS += \
	alsa_opl.o
endif

ifdef ENABLE_OPL2LPT
MODULE_OBJS += \
	opl2lpt.o
endif

ifdef USE_WMA
MODULE_OBJS += \
	decoders/wma.o
endif

ifdef USE_ASF
MODULE_OBJS += \
	decoders/asf.o
endif

ifdef USE_3DO
MODULE_OBJS += \
	decoders/3do.o
endif

ifdef USE_QUICKTIME
MODULE_OBJS += \
	decoders/quicktime.o
endif

ifdef USE_AMIGARES
MODULE_OBJS += \
	mods/paula.o \
	mods/tfmx.o \
	mods/infogrames.o \
	mods/maxtrax.o
endif

# Include common rules
include $(srcdir)/rules.mk
