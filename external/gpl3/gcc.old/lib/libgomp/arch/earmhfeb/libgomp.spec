# This file is automatically generated.  DO NOT EDIT!
# Generated from: NetBSD: mknative-gcc,v 1.86 2016/03/16 11:16:05 mrg Exp 
# Generated from: NetBSD: mknative.common,v 1.11 2014/02/17 21:39:43 christos Exp 
#
# This spec file is read by gcc when linking.  It is used to specify the
# standard libraries we need in order to link with libgomp.
*link_gomp: -lgomp %{static: }
