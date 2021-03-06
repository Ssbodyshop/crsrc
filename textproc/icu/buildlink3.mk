# $NetBSD: buildlink3.mk,v 1.35 2017/11/30 17:54:18 maya Exp $

BUILDLINK_TREE+=	icu

.if !defined(ICU_BUILDLINK3_MK)
ICU_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.icu+=	icu>=3.4
BUILDLINK_ABI_DEPENDS.icu+=	icu>=60.0
BUILDLINK_PKGSRCDIR.icu?=	../../textproc/icu

.if !empty(USE_LANGUAGES:Mc++)
USE_LANGUAGES+=	c++11
.endif

.endif # ICU_BUILDLINK3_MK

BUILDLINK_TREE+=	-icu
