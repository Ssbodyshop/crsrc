# $NetBSD: buildlink3.mk,v 1.22 2018/01/07 13:04:14 rillig Exp $

BUILDLINK_TREE+=	gnome-icon-theme

.if !defined(GNOME_ICON_THEME_BUILDLINK3_MK)
GNOME_ICON_THEME_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.gnome-icon-theme+=	gnome-icon-theme>=2.8.0
BUILDLINK_ABI_DEPENDS.gnome-icon-theme+=	gnome-icon-theme>=2.12.1nb2
BUILDLINK_PKGSRCDIR.gnome-icon-theme?=		../../graphics/gnome-icon-theme

# intltool-{extract,merge,update} are Perl scripts included in the sources
# of packages that use gnome-icon-theme and are executed during build.
#
USE_TOOLS+=	perl

.include "../../mk/bsd.fast.prefs.mk"

.if !defined(GNOME_ICON_THEME_DEPEND_ONLY)

.  if !defined(NOOP_GTK_UPDATE_ICON_CACHE)
NOOP_GTK_UPDATE_ICON_CACHE=
TOOLS_NOOP+=			gtk-update-icon-cache
.  endif

.endif  # GNOME_ICON_THEME_DEPEND_ONLY
.endif # GNOME_ICON_THEME_BUILDLINK3_MK

BUILDLINK_TREE+=	-gnome-icon-theme
