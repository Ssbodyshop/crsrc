# $NetBSD: Makefile,v 1.18 2017/10/13 14:19:05 fhajny Exp $

DISTNAME=	peewee-2.10.2
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	databases
MASTER_SITES=	${MASTER_SITE_GITHUB:=coleifer/}

MAINTAINER=	filip@joyent.com
HOMEPAGE=	http://www.peewee-orm.com/
COMMENT=	Small, expressive ORM for PostgreSQL, MySQL and SQLite
LICENSE=	mit

GITHUB_PROJECT=	peewee

DEPENDS+=	${PYPKGPREFIX}-cython>=0.22.1:../../devel/py-cython

USE_LANGUAGES=	c
USE_TOOLS+=	bash

BUILD_DEPENDS+=	${PYPKGPREFIX}-sphinx-[0-9]*:../../textproc/py-sphinx

MAKE_FLAGS+=	SPHINXBUILD=sphinx-build${PYVERSSUFFIX}

FILES_SUBST+=	PKGMANDIR=${PKGMANDIR}
MESSAGE_SUBST+=	PYPKGPREFIX=${PYPKGPREFIX}

REPLACE_BASH+=		playhouse/berkeley_build.sh
REPLACE_PYTHON+=	pwiz.py

INSTALLATION_DIRS+=	${PKGMANDIR}/man1

post-build:
	cd ${WRKSRC}/docs && ${BUILD_MAKE_CMD} man

post-install:
	${MV} ${DESTDIR}${PREFIX}/bin/pskel \
		${DESTDIR}${PREFIX}/bin/pskel${PYVERSSUFFIX}
	${MV} ${DESTDIR}${PREFIX}/bin/pwiz.py \
		${DESTDIR}${PREFIX}/bin/pwiz${PYVERSSUFFIX}
	${INSTALL_MAN} ${WRKSRC}/docs/_build/man/peewee.1 \
		${DESTDIR}${PREFIX}/${PKGMANDIR}/man1/peewee${PYVERSSUFFIX}.1

.include "../../lang/python/application.mk"
.include "../../lang/python/distutils.mk"
.include "../../mk/bsd.pkg.mk"
