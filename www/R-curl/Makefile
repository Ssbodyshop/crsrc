# $NetBSD: Makefile,v 1.2 2018/01/01 21:18:54 adam Exp $

PKGREVISION=	1
CATEGORIES=	www R
MASTER_SITES=	${MASTER_SITE_R_CRAN:=contrib/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	${R_HOMEPAGE_BASE}/curl/
COMMENT=	Modern and flexible web client for R
LICENSE=	mit

R_PKGNAME=	curl
R_PKGVER=	3.0

.include "../../math/R/Makefile.extension"
.include "../../www/curl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
