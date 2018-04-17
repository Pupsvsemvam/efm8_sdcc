# Copyright 2018 jem@seethis.link
# Licensed under the MIT license (http://opensource.org/licenses/MIT)

VPATH += $(BASE_PATH)/src
VPATH += $(EFM8_PATH)

ifndef MCU
  $(error "MCU not defined")
endif

ifndef PIN_COUNT
  $(error "PIN_COUNT not defined")
endif

ifndef F_CPU
  $(error "F_CPU not defined")
else
  CDEFS += -DF_CPU=$(F_CPU)ULL
endif

ifeq ($(MCU), EFM8UB10F16)
  MCU_FAMILY := EFM8UB1
  CODE_SIZE := 0x4000 # 16kb
  XRAM_SIZE := 0x0800 #  2kb
else ifeq ($(MCU), EFM8UB11F16)
  MCU_FAMILY := EFM8UB1
  CODE_SIZE := 0x4000 # 16kb
  XRAM_SIZE := 0x0800 #  2kb
else ifeq ($(MCU), EFM8UB10F16)
  MCU_FAMILY := EFM8UB1
  CODE_SIZE := 0x4000 # 16kb
  XRAM_SIZE := 0x0800 #  2kb
else ifeq ($(MCU), EFM8UB10F8)
  MCU_FAMILY := EFM8UB1
  CODE_SIZE := 0x2000 #  8kb
  XRAM_SIZE := 0x0800 #  2kb
else ifeq ($(MCU), EFM8UB20F32)
  MCU_FAMILY := EFM8UB2
  CODE_SIZE := 0x8000 # 32kb
  XRAM_SIZE := 0x0800 #  2kb
else ifeq ($(MCU), EFM8UB20F64)
  MCU_FAMILY := EFM8UB2
  CODE_SIZE := 0xFC00 # 64kb
  XRAM_SIZE := 0x1000 #  4kb
else
  $(error "No definition for this MCU='$(MCU)' (NOTE: must be all CAPS)"\
	"TODO: not many have been defined yet")
endif

# TODO: check if this is true for all micros
CODE_LOC := 0x0000
XRAM_LOC := 0x0000

CFLAGS += -DMCU_STRING=$(MCU_STRING)
CFLAGS += -DPIN_COUNT=$(PIN_COUNT)
CFLAGS += -DMCU_$(MCU_FAMILY)
CFLAGS += -DDEVICE_$(MCU_FAMILY)=$(MCU_SPECIFIC)

INC_PATHS += -I$(BASE_PATH)
INC_PATHS += -I$(EFM8_PATH)
INC_PATHS += -I$(EFM8_PATH)/mcu
INC_PATHS += -I$(EFM8_PATH)/mcu/$(MCU_FAMILY)/inc
INC_PATHS += -I$(EFM8_PATH)/mcu/$(MCU_FAMILY)/peripheral_driver/inc
INC_PATHS += -I$(EFM8_PATH)/si8051Base

LFLAGS += \
	--code-loc $(CODE_LOC) \
	--code-size $(CODE_SIZE) \
	--xram-loc  $(XRAM_LOC)\
	--xram-size $(XRAM_SIZE) \

ifdef SIMPLICITY_STUDIO_PATH
  ADAPTER_PACKS_PATH="$(SIMPLICITY_STUDIO_PATH)/developer/adapter_packs"
  FLASH_8051="$(ADAPTER_PACKS_PATH)/c8051/flash8051"
  INSPECT_8051="$(ADAPTER_PACKS_PATH)/inspect_c8051/device8051"
  FLASH_EFM8="$(ADAPTER_PACKS_PATH)/c8051/flash8051"
endif
