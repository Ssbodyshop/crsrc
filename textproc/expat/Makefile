# $NetBSD: Makefile,v 1.35 2017/09/08 07:55:17 wiz Exp $

DISTNAME=	expat-2.2.4
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=expat/}
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	drochner@NetBSD.org
HOMEPAGE=	http://www.libexpat.org/
COMMENT=	XML parser library written in C
LICENSE=	mit

GNU_CONFIGURE=		yes
USE_LIBTOOL=		yes

# C++ is needed for tests only
#USE_LANGUAGES=		c c++
#TEST_TARGET=		check
#USE_TOOLS+=		bash
#REPLACE_BASH=		test-driver-wrapper.sh

PKGCONFIG_OVERRIDE+=	expat.pc.in

DOCDIR=	${PREFIX}/share/doc/html/expat

post-install:
	${INSTALL_DATA_DIR} ${DESTDIR}${DOCDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/reference.html ${DESTDIR}${DOCDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/style.css ${DESTDIR}${DOCDIR}

.include "../../mk/bsd.pkg.mk"
