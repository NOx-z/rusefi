include $(PROJECT_DIR)/hw_layer/ports/stm32/stm32_common.mk

HW_LAYER_PORT += $(PROJECT_DIR)/hw_layer/ports/stm32/stm32f7/stm32f7xx_hal_flash.c \
				$(PROJECT_DIR)/hw_layer/ports/stm32/stm32f7/stm32f7xx_hal_flash_ex.c

HW_LAYER_PORT_CPP += $(PROJECT_DIR)/hw_layer/ports/stm32/stm32f7/mpu_util.cpp \
					$(PROJECT_DIR)/hw_layer/ports/stm32/stm32_adc_v2.cpp \

# This MCU has a cache, align functions to a cache line for maximum cache efficiency
USE_OPT += -falign-functions=16

DDEFS += -DSTM32F767xx
MCU = cortex-m7
LDSCRIPT = $(PROJECT_DIR)/hw_layer/ports/stm32/stm32f7/STM32F7.ld
# kludge: while we the very generic ChibiOS board.c we use our custom board.h from current folder!
ifeq ($(BOARD_C),)
	BOARD_C = $(CHIBIOS)/os/hal/boards/ST_NUCLEO144_F767ZI/board.c
endif
ALLCSRC += $(BOARD_C)
CONFDIR = $(PROJECT_DIR)/hw_layer/ports/stm32/stm32f7/cfg

# TODO: remove, for efifeatures.h
ALLINC += $(PROJECT_DIR)/config/stm32f7ems
