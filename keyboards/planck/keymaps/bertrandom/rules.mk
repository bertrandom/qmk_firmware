ifeq ($(strip $(AUDIO_ENABLE)), yes)
    SRC += muse.c
endif

ifneq ("$(wildcard keyboards/planck/keymaps/bertrandom/secrets.c)","")
	SRC += secrets.c
endif