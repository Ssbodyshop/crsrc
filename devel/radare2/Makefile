# $NetBSD: Makefile,v 1.10 2017/09/02 22:02:25 wiz Exp $

PKGREVISION= 2
.include "Makefile.common"

DISTNAME=	radare2-${RADARE2_VERSION}
CATEGORIES=	devel
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	Reverse engineering framework
LICENSE=	gnu-gpl-v3

HAS_CONFIGURE=	YES
CONFIGURE_ARGS+=	--mandir=${PREFIX}/${PKGMANDIR}
CONFIGURE_ARGS+=	--with-sysmagic
CONFIGURE_ARGS+=	--with-syscapstone
CONFIGURE_ARGS+=	--with-syszip
PKGCONFIG_OVERRIDE+=	pkgcfg/*.pc*
USE_TOOLS+=	gmake patch pkg-config

# node
CHECK_INTERPRETER_SKIP+=	share/radare2/${RADARE2_VERSION}/www/m/fonts/iconjar-map.js

.include "options.mk"

.include "../../devel/capstone/buildlink3.mk"
.include "../../sysutils/file/buildlink3.mk"
.include "../../archivers/libzip/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
