/*	$NetBSD: nv40.h,v 1.2 2018/08/27 04:58:32 riastradh Exp $	*/

#ifndef __NVKM_PM_NV40_H__
#define __NVKM_PM_NV40_H__
#define nv40_pm(p) container_of((p), struct nv40_pm, base)
#include "priv.h"

struct nv40_pm {
	struct nvkm_pm base;
	u32 sequence;
};

int nv40_pm_new_(const struct nvkm_specdom *, struct nvkm_device *,
		 int index, struct nvkm_pm **);
extern const struct nvkm_funcdom nv40_perfctr_func;
#endif
