# $NetBSD: Makefile,v 1.106 2015/02/07 22:58:18 tnn Exp $

DISTNAME=		opera-${OPERA_PKG_VERSION}-${OPERA_PKG_BUILD}.${OPERA_ARCH}.${EMUL_OPSYS}
PKGNAME=		opera-${OPERA_PKG_VERSION:S/u/pl/}
CATEGORIES=		www
MASTER_SITES+=		${MASTER_SITE_OPERA:=${OPERA_DIR}/}
EXTRACT_SUFX=		.tar.xz

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://www.opera.com/
COMMENT=		Standards-compliant graphical Web browser
LICENSE=		opera-1200-license

EMUL_PLATFORMS=		freebsd-i386 freebsd-x86_64 \
			linux-i386 linux-x86_64

.include "../../mk/bsd.prefs.mk"

MASTER_SITE_OPERA+=	ftp://ftp.opera.com/pub/opera/ \
			ftp://ftp.task.gda.pl/pub/opera/ \
			ftp://ftp.tuwien.ac.at/infosys/browsers/opera/ \
			ftp://opera.nsc.no/pub/nsc.no/mirrors/operasoftware/ \
			ftp://ftp.opera.com/pub/opera/ \
			http://ftp.yz.yamagata-u.ac.jp/pub/opera/

USE_LANGUAGES=		# empty
NO_BUILD=		yes

OPERA_PKG_BUILD=	1860
OPERA_PKG_VERSION=	12.16
OPERA_PKG_VERSION_DIR=	1216

PLIST_VARS+=		ia32w linux

.if ${EMUL_OPSYS} == "linux"
EMUL_MODULES.linux=	base x11 fontconfig locale
EMUL_REQD=		suse>=11.3
OPERA_ARCH.x86_64=	x86_64
OPERA_OPSYS_SUBDIR=	linux
.if !defined(EMUL_IS_NATIVE) && ${OPSYS} == "NetBSD"
TOOLS_CREATE+=		md5
TOOLS_SCRIPT.md5=	/usr/bin/md5 -n "$$2" | { read sum file; echo $$sum; }
.endif
.if ${EMUL_ARCH} == "x86_64"
PLIST.ia32w=		yes
.endif
PLIST.linux=		yes

.elif ${EMUL_OPSYS} == "freebsd"
OPERA_ARCH.x86_64=	amd64
OPERA_OPSYS_SUBDIR=	unix
# XXX: TBD
#.  if defined(EMUL_IS_NATIVE)
#DEPENDS+=		{gtk2+-[0-9]*,kdelibs4-[0-9]*}:../../x11/gtk2
#CHECK_SHLIBS_SUPPORTED=	no
#.  endif
.endif
OPERA_ARCH=		${OPERA_ARCH.${EMUL_ARCH}:U${EMUL_ARCH}}
OPERA_DIR=		${OPERA_OPSYS_SUBDIR}/${OPERA_PKG_VERSION_DIR}

MANCOMPRESSED=		yes

SUBST_CLASSES+=		plugin
SUBST_STAGE.plugin=	post-install
SUBST_FILES.plugin=	${DESTDIR}${PREFIX}/share/opera/defaults/pluginpath.ini
SUBST_SED.plugin=	-e 's,/usr/local/,${PREFIX}/,g'

.if ${PKGMANDIR} != "share/man"
post-extract:
	${RUN} cd ${WRKSRC}; mv share/man ${PKGMANDIR}

SUBST_CLASSES+=		manpath
SUBST_STAGE.manpath=	post-extract
SUBST_FILES.manpath=	install
SUBST_SED.manpath=	-e 's,share/man,${PKGMANDIR},g'
.endif

do-install:
	${RUN} cd ${WRKSRC};				\
		${SH} ./install --quiet --prefix ${PREFIX} --force \
			--repackage ${DESTDIR}${PREFIX}

.include "../../databases/shared-mime-info/mimedb.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../mk/bsd.pkg.mk"
