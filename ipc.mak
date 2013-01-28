#
#  ======== ipc.mak ========
#

#
# Where to install/stage the packages
# Typically this would point to the devkit location
#
DESTDIR ?= <UNDEFINED>

packagesdir ?= /packages
libdir ?= /lib
includedir ?= /include

ifeq ($(docdir),)
docdir := /share/ti/ipc/doc
packagedocdir := /docs/ipc
else
packagedocdir := $(docdir)
endif

ifeq ($(prefix),)
prefix := /usr
packageprefix := /
else
packageprefix := $(prefix)
endif

# Set up dependencies
XDC_INSTALL_DIR ?= $(TREES)/xdcprod/xdcprod-o21/product/$(BUILD_HOST_OS)/xdctools_3_22_01_21
BIOS_INSTALL_DIR ?= $(TREES)/avalaprod/avalaprod-h49/exports/bios_6_32_04_49

#
# Set location of various cgtools
# These variables can be set here or on the command line.  The ?= makes
# the command line to take precedence over the setting in this file.
#
ti.targets.C28_large ?=
ti.targets.C28_float ?=
ti.targets.C64P ?=
ti.targets.C64P_big_endian ?=
ti.targets.C64T ?=
ti.targets.C674 ?=

ti.targets.elf.C64P ?=
ti.targets.elf.C64P_big_endian ?=
ti.targets.elf.C64T ?=
ti.targets.elf.C66 ?=
ti.targets.elf.C66_big_endian ?=
ti.targets.elf.C674 ?=

ti.targets.arm.elf.Arm9 ?=
ti.targets.arm.elf.A8Fnv ?=
ti.targets.arm.elf.M3 ?=
ti.targets.arm.elf.M4 ?=
ti.targets.arm.elf.M4F ?=

ti.targets.arp32.elf.ARP32 ?=
ti.targets.arp32.elf.ARP32_far ?=

gnu.targets.arm.M3 ?=
gnu.targets.arm.M4 ?=
gnu.targets.arm.M4F ?=

gnu.targets.arm.A15 ?=
#
# Set XDCARGS to some of the variables above.  XDCARGS are passed
# to the XDC build engine... which will load ipc.bld... which will
# extract these variables and use them to determine what to build and which
# toolchains to use.
#
# Note that not all of these variables need to be set to something valid.
# Unfortunately, since these vars are unconditionally assigned, your build line
# will be longer and more noisy than necessary (e.g., it will include CC_V5T
# assignment even if you're just building for C64P).
#
# Some background is here:
#     http://rtsc.eclipse.org/docs-tip/Command_-_xdc#Environment_Variables
#
XDCARGS= \
    ti.targets.C28_large=\"$(ti.targets.C28_large)\" \
    ti.targets.C28_float=\"$(ti.targets.C28_float)\" \
    ti.targets.C64P=\"$(ti.targets.C64P)\" \
    ti.targets.C64P_big_endian=\"$(ti.targets.C64P_big_endian)\" \
    ti.targets.C64T=\"$(ti.targets.C64T)\" \
    ti.targets.C674=\"$(ti.targets.C674)\" \
    ti.targets.arm.elf.Arm9=\"$(ti.targets.arm.elf.Arm9)\" \
    ti.targets.arm.elf.A8Fnv=\"$(ti.targets.arm.elf.A8Fnv)\" \
    ti.targets.arm.elf.M3=\"$(ti.targets.arm.elf.M3)\" \
    ti.targets.arm.elf.M4=\"$(ti.targets.arm.elf.M4)\" \
    ti.targets.arm.elf.M4F=\"$(ti.targets.arm.elf.M4F)\" \
    ti.targets.elf.C64P=\"$(ti.targets.elf.C64P)\" \
    ti.targets.elf.C64P_big_endian=\"$(ti.targets.elf.C64P_big_endian)\" \
    ti.targets.elf.C64T=\"$(ti.targets.elf.C64T)\" \
    ti.targets.elf.C66=\"$(ti.targets.elf.C66)\" \
    ti.targets.elf.C66_big_endian=\"$(ti.targets.elf.C66_big_endian)\" \
    ti.targets.elf.C674=\"$(ti.targets.elf.C674)\" \
    ti.targets.msp430.MSP430=\"$(ti.targets.msp430.MSP430)\" \
    ti.targets.msp430.MSP430X=\"$(ti.targets.msp430.MSP430X)\" \
    ti.targets.msp430.MSP430X_small=\"$(ti.targets.msp430.MSP430X_small)\" \
    ti.targets.arp32.elf.ARP32=\"$(ti.targets.arp32.elf.ARP32)\" \
    ti.targets.arp32.elf.ARP32_far=\"$(ti.targets.arp32.elf.ARP32_far)\" \
    gnu.targets.arm.M3=\"$(gnu.targets.arm.M3)\" \
    gnu.targets.arm.M4=\"$(gnu.targets.arm.M4)\" \
    gnu.targets.arm.M4F=\"$(gnu.targets.arm.M4F)\"
    gnu.targets.arm.A15=\"$(gnu.targets.arm.A15)\"

#
# Set XDCPATH to contain necessary repositories.
#
XDCPATH = $(BIOS_INSTALL_DIR)/packages
export XDCPATH

#
# Set XDCOPTIONS.  Use -v for a verbose build.
#
#XDCOPTIONS=v
export XDCOPTIONS

#
# Set XDC executable command
# Note that XDCBUILDCFG points to the ipc.bld file which uses
# the arguments specified by XDCARGS
#
XDC = $(XDC_INSTALL_DIR)/xdc XDCARGS="$(XDCARGS)" XDCBUILDCFG=./ipc.bld

######################################################
## Shouldnt have to modify anything below this line ##
######################################################

all:
	@ echo building ipc packages ...
# build everything but the packages with 'examples' in the namespace
	@ $(XDC) -P `$(XDC_INSTALL_DIR)/bin/xdcpkg packages | grep -v examples`
# build the platforms that reside in the examples/platforms namespace
	@ $(XDC) -PR ./packages/ti/sdo/ipc/examples/platforms

clean:
	@ echo cleaning ipc packages ...
	@ $(XDC) clean -Pr ./packages

install-packages:
	@ echo installing ipc packages to $(DESTDIR) ...
	@ mkdir -p $(DESTDIR)/$(packageprefix)/$(packagedocdir)
	@ cp -rf $(wildcard ipc_*_release_notes.html) docs/* $(DESTDIR)/$(packageprefix)/$(packagedocdir)
	@ mkdir -p $(DESTDIR)/$(packageprefix)/$(packagesdir)
	@ cp -rf packages/* $(DESTDIR)/$(packageprefix)/$(packagesdir)

install:
	@ echo installing ti/ipc to $(DESTDIR) ...
	@ mkdir -p $(DESTDIR)/$(prefix)/$(docdir)
	@ cp -rf $(wildcard ipc_*_release_notes.html) docs/* $(DESTDIR)/$(prefix)/$(docdir)
	@ mkdir -p $(DESTDIR)/$(prefix)/$(includedir)/ti/ipc
	@ cp -rf packages/ti/ipc/*.h $(DESTDIR)/$(prefix)/$(includedir)/ti/ipc
