# $NetBSD: Makefile,v 1.15 2017/11/30 16:45:13 adam Exp $

DISTNAME=	qtwebsockets-opensource-src-${QTVERSION}
PKGNAME=	qt5-websockets-${QTVERSION}
PKGREVISION=	10
COMMENT=	Qt5 module for websockets

MAKE_ENV+=		QTDIR=${QTDIR}
INSTALL_ENV+=		INSTALL_ROOT=${DESTDIR}
INSTALLATION_DIRS+=	lib/pkgconfig

.include "../../x11/qt5-qtbase/Makefile.common"

post-install:
.for i in Qt5WebSockets.pc
	cd ${DESTDIR}${PREFIX}/lib/pkgconfig && \
	ln -f -s ${QTPREFIX}/lib/pkgconfig/${i} ${i}
.endfor


.include "../../x11/qt5-qtdeclarative/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
