# $NetBSD: Makefile,v 1.3 2017/01/01 14:43:39 wiz Exp $
#

DISTNAME=	fuse-pcachefs-0.0.20160203
CATEGORIES=	filesystems
MASTER_SITES=	${MASTER_SITE_GITHUB:=ibizaman/}
GITHUB_PROJECT=	pcachefs
GITHUB_TAG=	0712601d2b3fc2667112be106133ae162e98d7a5

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/ibizaman/pcachefs
COMMENT=	FUSE-based persistent caching filesystem
LICENSE=	apache-2.0

DEPENDS+=	${PYPKGPREFIX}-fuse-bindings-[0-9]*:../../filesystems/py-fuse-bindings

EGG_NAME=	pCacheFS-0.2
PYTHON_VERSIONS_INCOMPATIBLE=	34 35 36 # py-fuse-bindings

.include "../../lang/python/egg.mk"
.include "../../mk/fuse.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
