# $NetBSD: Makefile,v 1.36 2017/12/03 03:57:31 maya Exp $

DISTNAME=	libcaca-0.99.beta18
PKGNAME=	${DISTNAME:S/beta//}
PKGREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	http://caca.zoy.org/files/libcaca/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://caca.zoy.org/
COMMENT=	Graphics library that outputs text instead of pixels, in colour
# LICENSE=	wtfpl

TEST_TARGET=		check
USE_LIBTOOL=		yes
USE_LANGUAGES=		c c++
USE_TOOLS+=		pkg-config
USE_PKGLOCALEDIR=	yes
GNU_CONFIGURE=		yes
PKGCONFIG_OVERRIDE+=	caca/caca.pc.in

CHECK_FILES_SKIP+=	${PREFIX}/lib/libcucul.*

CONFIG_GUESS_OVERRIDE+=	.auto/config.guess
CONFIG_SUB_OVERRIDE+=	.auto/config.sub

.include "options.mk"

CONFIGURE_ARGS+=	--disable-doc

LDFLAGS.Linux+=	-ldl
LDFLAGS.SunOS+=	-lsocket -lnsl

.include "../../mk/bsd.pkg.mk"
