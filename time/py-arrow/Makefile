# $NetBSD: Makefile,v 1.5 2018/01/05 12:00:01 adam Exp $

DISTNAME=	arrow-0.12.0
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	time python
MASTER_SITES=	${MASTER_SITE_PYPI:=a/arrow/}

MAINTAINER=	kamelderouiche@yahoo.com
HOMEPAGE=	http://crsmithdev.com/arrow/
COMMENT=	Better dates and times for Python
LICENSE=	apache-2.0

DEPENDS+=	${PYPKGPREFIX}-dateutil-[0-9]*:../../time/py-dateutil
# TEST_DEPENDS
BUILD_DEPENDS+=	${PYPKGPREFIX}-chai-[0-9]*:../../devel/py-chai

USE_LANGUAGES=	# none

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
