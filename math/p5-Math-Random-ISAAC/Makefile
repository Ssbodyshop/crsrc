# $NetBSD: Makefile,v 1.5 2017/06/05 14:24:11 ryoon Exp $
#

DISTNAME=	Math-Random-ISAAC-1.004
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	4
CATEGORIES=	math perl5 security
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Math/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Math-Random-ISAAC/
COMMENT=	Perl interface to the ISAAC PRNG algorithm
LICENSE=	cc0-1.0-universal

DEPENDS+=	p5-Math-Random-ISAAC-XS-[0-9]*:../../math/p5-Math-Random-ISAAC-XS

BUILD_DEPENDS+=	p5-Test-NoWarnings>=0.084:../../devel/p5-Test-NoWarnings

USE_LANGUAGES=	c
PERL5_PACKLIST=	auto/Math/Random/ISAAC/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
