# $NetBSD: Makefile,v 1.3 2017/11/17 11:18:49 adam Exp $

DISTNAME=	pendulum-1.3.2
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	time python
MASTER_SITES=	${MASTER_SITE_PYPI:=p/pendulum/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/sdispater/pendulum
COMMENT=	Human-friendly date and time handling
LICENSE=	mit

DEPENDS+=	${PYPKGPREFIX}-dateutil-[0-9]*:../../time/py-dateutil
DEPENDS+=	${PYPKGPREFIX}-tzdata-[0-9]*:../../time/py-tzdata
DEPENDS+=	${PYPKGPREFIX}-tzlocal-[0-9]*:../../time/py-tzlocal
BUILD_DEPENDS+=	${PYPKGPREFIX}-test-[0-9]*:../../devel/py-test

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
