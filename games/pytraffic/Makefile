# $NetBSD: Makefile,v 1.49 2018/01/14 17:34:01 rillig Exp $

DISTNAME=	pytraffic-2.5.4
PKGREVISION=	31
CATEGORIES=	games
MASTER_SITES=	http://alpha.uhasselt.be/Research/Algebra/Members/pytraffic/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://alpha.uhasselt.be/Research/Algebra/Members/pytraffic/
COMMENT=	Computer version of a popular board game

# pytraffic-2.5.4 distfile was changed after release
DIST_SUBDIR=	pytraffic-2.5.4-070313

DEPENDS+=	${PYPKGPREFIX}-gtk2-[0-9]*:../../x11/py-gtk2

PYTHON_VERSIONS_INCOMPATIBLE=	34 35 36 # py-gtk2

.include "../../lang/python/application.mk"
.include "../../lang/python/distutils.mk"
.include "../../devel/SDL/buildlink3.mk"
.include "../../audio/SDL_mixer/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
