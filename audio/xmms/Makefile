# $NetBSD: Makefile,v 1.79 2015/09/07 12:02:07 jperkin Exp $
#

.include "Makefile.common"

PKGREVISION=	5

USE_TOOLS+=	msgfmt

CONFIGURE_ARGS+=	--disable-esd

PLIST_VARS+=		cdaudio

.if ${OPSYS} != "Darwin"
PLIST.cdaudio=		yes
.endif

BUILDLINK_DEPMETHOD.libXt?=	build

REPLACE_SH=		xmms-config.in

.include "../../devel/zlib/buildlink3.mk"
.include "../../x11/libSM/buildlink3.mk"
.include "../../x11/libXt/buildlink3.mk"
.include "../../x11/xf86vidmodeproto/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
