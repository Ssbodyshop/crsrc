# $NetBSD: buildlink3.mk,v 1.6 2018/01/10 16:22:41 jaapb Exp $

BUILDLINK_TREE+=	camlp4

.if !defined(CAMLP4_BUILDLINK3_MK)
CAMLP4_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.camlp4+=	camlp4>=4.06
BUILDLINK_ABI_DEPENDS.camlp4+=	camlp4>=4.06
BUILDLINK_PKGSRCDIR.camlp4?=	../../lang/camlp4
.endif	# CAMLP4_BUILDLINK3_MK

BUILDLINK_TREE+=	-camlp4
