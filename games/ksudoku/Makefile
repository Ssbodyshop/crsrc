# $NetBSD: Makefile,v 1.24 2018/01/01 21:18:29 adam Exp $

DISTNAME=	ksudoku-${_KDE_VERSION}
PKGREVISION=	8
CATEGORIES=	games
COMMENT=	a logic-based symbol placement puzzle

.include "../../meta-pkgs/kde4/Makefile.kde4"

.include "../../meta-pkgs/kde4/kde4.mk"

.include "../../games/libkdegames/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/kdelibs4/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
