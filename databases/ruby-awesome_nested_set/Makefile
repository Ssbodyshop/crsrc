# $NetBSD: Makefile,v 1.9 2017/09/16 19:26:45 wiz Exp $

DISTNAME=	awesome_nested_set-2.1.6
PKGNAME=	${RUBY_PKGPREFIX}-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	databases ruby

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/collectiveidea/awesome_nested_set
COMMENT=	Awesome nested set implementation for Active Record
LICENSE=	mit

DEPENDS+=	${RUBY_ACTIVERECORD_DEPENDS}

RUBY_RAILS_SUPPORTED=	32
USE_LANGUAGES=	# none

.include "../../lang/ruby/gem.mk"
.include "../../mk/bsd.pkg.mk"
