# $NetBSD: Makefile,v 1.12 2018/01/03 20:48:28 fhajny Exp $

DISTNAME=	fast_tls-1.0.18
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_GITHUB:=processone/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/processone/tls/
COMMENT=	TLS / SSL OpenSSL-based native driver for Erlang / Elixir
LICENSE=	apache-2.0

GITHUB_PROJECT=	fast_tls

DEPENDS+=	erlang-p1_utils>=1.0.10:../../misc/erlang-p1_utils

GNU_CONFIGURE=	yes

.include "../../security/openssl/buildlink3.mk"
.include "../../lang/erlang/module.mk"
.include "../../mk/bsd.pkg.mk"
