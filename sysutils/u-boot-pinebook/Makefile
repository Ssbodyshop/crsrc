# $NetBSD: Makefile,v 1.2 2017/11/19 16:50:35 jmcneill Exp $

UBOOT_VERSION=		2017.09
UBOOT_TARGET=		pinebook
UBOOT_CONFIG=		pinebook_defconfig
UBOOT_BIN=		u-boot-sunxi-with-spl.bin

# Use anarsoul's fork of mainline U-Boot with Pinebook support patched in
MASTER_SITES=		${MASTER_SITE_GITHUB:=anarsoul/}
GITHUB_PROJECT=		u-boot-pine64
GITHUB_TAG=		0e9350e3ff11c91eb6959d0d4589a4cc5e576e35
DISTNAME=		u-boot-${UBOOT_TARGET}-${UBOOT_VERSION}
EXTRACT_SUFX=		.tar.gz

# Switch to EL1 before booting kernel (required for 32-bit support)
PKG_DEFAULT_OPTIONS+=	el1

post-extract:
	${CP} ${PREFIX}/share/arm-trusted-firmware/sun50iw1p1/bl31.bin ${WRKSRC}

BUILD_DEPENDS+=		arm-trusted-firmware-sun50iw1p1-[0-9]*:../../sysutils/arm-trusted-firmware-sun50iw1p1

post-build:
	${CAT} ${WRKSRC}/spl/sunxi-spl.bin ${WRKSRC}/u-boot.itb > ${WRKSRC}/u-boot-sunxi-with-spl.bin

.include "../../sysutils/u-boot/u-boot-arm64.mk"

# Override U-Boot defaults
DISTINFO_FILE=		${.CURDIR}/distinfo
PATCHDIR=		${.CURDIR}/patches
