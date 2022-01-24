MODULE := gui

MODULE_OBJS := \
	chooser.o \
	console.o \
	debugger.o \
	dialog.o \
	gui-manager.o \
	massadd.o \
	message.o \
	object.o \
	ThemeEngine.o \
	ThemeEval.o \
	ThemeLayout.o \
	ThemeParser.o \
	Tooltip.o \
	animation/Animation.o \
	animation/RepeatAnimationWrapper.o \
	animation/SequenceAnimationComposite.o \
	widget.o \
	widgets/editable.o \
	widgets/edittext.o \
	widgets/list.o \
	widgets/popup.o \
	widgets/scrollbar.o \
	widgets/scrollcontainer.o \
	widgets/tab.o

ifdef USE_CLOUD
ifdef USE_LIBCURL
MODULE_OBJS += \
	downloaddialog.o \
	remotebrowser.o
endif
endif

ifdef ENABLE_EVENTRECORDER
MODULE_OBJS += \
	editrecorddialog.o \
	onscreendialog.o \
	recorderdialog.o \
	EventRecorder.o 
endif

ifdef USE_FLUIDSYNTH
MODULE_OBJS += \
	fluidsynth-dialog.o
endif

ifdef USE_UPDATES
MODULE_OBJS += \
	updates-dialog.o
endif

ifdef USE_LAUNCHER
MODULE_OBJS += \
	launcher.o \
	options.o \
	editgamedialog.o \
	themebrowser.o \
	browser.o \
	predictivedialog.o \
	saveload-dialog.o \
	filebrowser-dialog.o \
	unknown-game-dialog.o \
	saveload.o \
	about.o \
	error.o 
endif

# Include common rules
include $(srcdir)/rules.mk
