# This file is automatically generated.  DO NOT EDIT!
# Generated from: NetBSD: mknative-gcc,v 1.92 2018/02/06 07:04:01 mrg Exp 
# Generated from: NetBSD: mknative.common,v 1.15 2017/11/29 03:32:28 christos Exp 
#
G_BUILD_EARLY_SUPPORT=
G_BUILD_ERRORS=build-errors.o
G_BUILD_PRINT=
G_BUILD_RTL=build-rtl.o read-rtl.o build-ggc-none.o vec.o min-insn-modes.o gensupport.o build-print-rtl.o hash-table.o
G_BUILD_SUPPORT=
G_BUILD_VARRAY=
G_BUILD_MD=read-md.o
G_ALL_CFLAGS=   -DIN_GCC    -W -Wall -Wno-narrowing -Wwrite-strings -Wcast-qual -Wstrict-prototypes -Wmissing-prototypes -Wmissing-format-attribute -Woverloaded-virtual -pedantic -Wno-long-long -Wno-variadic-macros -Wno-overlength-strings -Wold-style-definition -Wc++-compat   -DHAVE_CONFIG_H
G_ALL_CPPFLAGS=-I. -I. -I${GNUHOSTDIST}/gcc -I${GNUHOSTDIST}/gcc/. -I${GNUHOSTDIST}/gcc/../include -I./../intl -I${GNUHOSTDIST}/gcc/../libcpp/include     -I${GNUHOSTDIST}/gcc/../libdecnumber -I${GNUHOSTDIST}/gcc/../libdecnumber/dpd -I../libdecnumber -I${GNUHOSTDIST}/gcc/../libbacktrace  
G_C_AND_OBJC_OBJS=attribs.o c/c-errors.o c/c-decl.o c/c-typeck.o c/c-convert.o c/c-aux-info.o c/c-objc-common.o c/c-parser.o c/c-array-notation.o c/c-fold.o c-family/c-common.o c-family/c-cppbuiltin.o c-family/c-dump.o c-family/c-format.o c-family/c-gimplify.o c-family/c-indentation.o c-family/c-lex.o c-family/c-omp.o c-family/c-opts.o c-family/c-pch.o c-family/c-ppoutput.o c-family/c-pragma.o c-family/c-pretty-print.o c-family/c-semantics.o c-family/c-ada-spec.o c-family/c-cilkplus.o c-family/array-notation-common.o c-family/cilk.o c-family/c-ubsan.o default-c.o
G_C_OBJS=c/c-lang.o c-family/stub-objc.o attribs.o c/c-errors.o c/c-decl.o c/c-typeck.o c/c-convert.o c/c-aux-info.o c/c-objc-common.o c/c-parser.o c/c-array-notation.o c/c-fold.o c-family/c-common.o c-family/c-cppbuiltin.o c-family/c-dump.o c-family/c-format.o c-family/c-gimplify.o c-family/c-indentation.o c-family/c-lex.o c-family/c-omp.o c-family/c-opts.o c-family/c-pch.o c-family/c-ppoutput.o c-family/c-pragma.o c-family/c-pretty-print.o c-family/c-semantics.o c-family/c-ada-spec.o c-family/c-cilkplus.o c-family/array-notation-common.o c-family/cilk.o c-family/c-ubsan.o default-c.o
G_CCCP_OBJS=
G_GCC_OBJS=gcc.o gcc-main.o ggc-none.o spellcheck.o
G_GCOV_OBJS=gcov.o
G_GCOV_DUMP_OBJS=gcov-dump.o
G_GXX_OBJS=gcc.o gcc-main.o ggc-none.o spellcheck.o cp/g++spec.o
G_GTM_H=tm.h      options.h ${GNUHOSTDIST}/gcc/config/elfos.h ${GNUHOSTDIST}/gcc/config/vxworks-dummy.h ${GNUHOSTDIST}/gcc/config/mips/mips.h ${GNUHOSTDIST}/gcc/config/mips/elf.h ${GNUHOSTDIST}/gcc/config/netbsd.h ${GNUHOSTDIST}/gcc/config/netbsd-stdint.h ${GNUHOSTDIST}/gcc/config/netbsd-elf.h ${GNUHOSTDIST}/gcc/config/mips/netbsd.h ${GNUHOSTDIST}/gcc/config/mips/netbsd64.h ${GNUHOSTDIST}/gcc/config/initfini-array.h ${GNUHOSTDIST}/gcc/defaults.h insn-constants.h
G_PROTO_OBJS=
G_INCLUDES=-I. -I. -I${GNUHOSTDIST}/gcc -I${GNUHOSTDIST}/gcc/. -I${GNUHOSTDIST}/gcc/../include -I./../intl -I${GNUHOSTDIST}/gcc/../libcpp/include     -I${GNUHOSTDIST}/gcc/../libdecnumber -I${GNUHOSTDIST}/gcc/../libdecnumber/dpd -I../libdecnumber -I${GNUHOSTDIST}/gcc/../libbacktrace 
G_md_file=${GNUHOSTDIST}/gcc/common.md ${GNUHOSTDIST}/gcc/config/mips/mips.md
G_OBJC_OBJS=objc/objc-lang.o objc/objc-act.o hash-table.o objc/objc-runtime-shared-support.o objc/objc-gnu-runtime-abi-01.o objc/objc-next-runtime-abi-01.o objc/objc-next-runtime-abi-02.o objc/objc-encoding.o objc/objc-map.o
G_OBJS=gimple-match.o generic-match.o insn-attrtab.o insn-automata.o insn-dfatab.o insn-emit.o insn-extract.o insn-latencytab.o insn-modes.o insn-opinit.o insn-output.o insn-peep.o insn-preds.o insn-recog.o insn-enums.o ggc-page.o alias.o alloc-pool.o auto-inc-dec.o auto-profile.o bb-reorder.o bitmap.o bt-load.o builtins.o caller-save.o calls.o ccmp.o cfg.o cfganal.o cfgbuild.o cfgcleanup.o cfgexpand.o cfghooks.o cfgloop.o cfgloopanal.o cfgloopmanip.o cfgrtl.o symtab.o cgraph.o cgraphbuild.o cgraphunit.o cgraphclones.o cilk-common.o combine.o combine-stack-adj.o compare-elim.o context.o convert.o coverage.o cppbuiltin.o cppdefault.o cprop.o cse.o cselib.o data-streamer.o data-streamer-in.o data-streamer-out.o dbxout.o dbgcnt.o dce.o ddg.o debug.o df-core.o df-problems.o df-scan.o dfp.o dojump.o dominance.o domwalk.o double-int.o dse.o dumpfile.o dwarf2asm.o dwarf2cfi.o dwarf2out.o emit-rtl.o et-forest.o except.o explow.o expmed.o expr.o final.o fixed-value.o fold-const.o fold-const-call.o function.o fwprop.o gcc-rich-location.o gcse.o gcse-common.o ggc-common.o gimple.o gimple-builder.o gimple-expr.o gimple-iterator.o gimple-fold.o gimple-laddress.o gimple-low.o gimple-pretty-print.o gimple-ssa-backprop.o gimple-ssa-isolate-paths.o gimple-ssa-nonnull-compare.o gimple-ssa-split-paths.o gimple-ssa-strength-reduction.o gimple-streamer-in.o gimple-streamer-out.o gimple-walk.o gimplify.o gimplify-me.o godump.o graph.o graphds.o graphite.o graphite-isl-ast-to-gimple.o graphite-dependences.o graphite-optimize-isl.o graphite-poly.o graphite-scop-detection.o graphite-sese-to-poly.o gtype-desc.o haifa-sched.o hsa.o hsa-gen.o hsa-regalloc.o hsa-brig.o hsa-dump.o hw-doloop.o hwint.o ifcvt.o ree.o inchash.o incpath.o init-regs.o internal-fn.o ipa-chkp.o ipa-cp.o ipa-devirt.o ipa-polymorphic-call.o ipa-split.o ipa-inline.o ipa-comdats.o ipa-visibility.o ipa-inline-analysis.o ipa-inline-transform.o ipa-profile.o ipa-prop.o ipa-pure-const.o ipa-icf.o ipa-icf-gimple.o ipa-reference.o ipa-hsa.o ipa-ref.o ipa-utils.o ipa.o ira.o ira-build.o ira-costs.o ira-conflicts.o ira-color.o ira-emit.o ira-lives.o jump.o langhooks.o lcm.o lists.o loop-doloop.o loop-init.o loop-invariant.o loop-iv.o loop-unroll.o lower-subreg.o lra.o lra-assigns.o lra-coalesce.o lra-constraints.o lra-eliminations.o lra-lives.o lra-remat.o lra-spills.o lto-cgraph.o lto-streamer.o lto-streamer-in.o lto-streamer-out.o lto-section-in.o lto-section-out.o lto-opts.o lto-compress.o mcf.o mode-switching.o modulo-sched.o multiple_target.o omp-low.o omp-simd-clone.o optabs.o optabs-libfuncs.o optabs-query.o optabs-tree.o options-save.o opts-global.o passes.o plugin.o postreload-gcse.o postreload.o predict.o print-rtl.o print-tree.o profile.o real.o realmpfr.o recog.o reg-stack.o regcprop.o reginfo.o regrename.o regstat.o regsub.o reload.o reload1.o reorg.o resource.o rtl-chkp.o rtl-error.o rtl.o rtlhash.o rtlanal.o rtlhooks.o sbitmap.o sched-deps.o sched-ebb.o sched-rgn.o sdbout.o sel-sched-ir.o sel-sched-dump.o sel-sched.o sese.o shrink-wrap.o simplify-rtx.o sparseset.o spellcheck.o spellcheck-tree.o sreal.o stack-ptr-mod.o statistics.o stmt.o stor-layout.o store-motion.o streamer-hooks.o stringpool.o target-globals.o targhooks.o timevar.o toplev.o tracer.o trans-mem.o tree-affine.o asan.o tsan.o ubsan.o sanopt.o sancov.o tree-call-cdce.o tree-cfg.o tree-cfgcleanup.o tree-chrec.o tree-complex.o tree-data-ref.o tree-dfa.o tree-diagnostic.o tree-dump.o tree-eh.o tree-emutls.o tree-if-conv.o tree-inline.o tree-into-ssa.o tree-iterator.o tree-loop-distribution.o tree-nested.o tree-nrv.o tree-object-size.o tree-outof-ssa.o tree-parloops.o tree-phinodes.o tree-chkp.o tree-chkp-opt.o tree-predcom.o tree-pretty-print.o tree-profile.o tree-scalar-evolution.o tree-sra.o tree-switch-conversion.o tree-ssa-address.o tree-ssa-alias.o tree-ssa-ccp.o tree-ssa-coalesce.o tree-ssa-copy.o tree-ssa-dce.o tree-ssa-dom.o tree-ssa-dse.o tree-ssa-forwprop.o tree-ssa-ifcombine.o tree-ssa-live.o tree-ssa-loop-ch.o tree-ssa-loop-im.o tree-ssa-loop-ivcanon.o tree-ssa-loop-ivopts.o tree-ssa-loop-manip.o tree-ssa-loop-niter.o tree-ssa-loop-prefetch.o tree-ssa-loop-unswitch.o tree-ssa-loop.o tree-ssa-math-opts.o tree-ssa-operands.o tree-ssa-phionlycprop.o tree-ssa-phiopt.o tree-ssa-phiprop.o tree-ssa-pre.o tree-ssa-propagate.o tree-ssa-reassoc.o tree-ssa-sccvn.o tree-ssa-scopedtables.o tree-ssa-sink.o tree-ssa-strlen.o tree-ssa-structalias.o tree-ssa-tail-merge.o tree-ssa-ter.o tree-ssa-threadbackward.o tree-ssa-threadedge.o tree-ssa-threadupdate.o tree-ssa-uncprop.o tree-ssa-uninit.o tree-ssa.o tree-ssanames.o tree-stdarg.o tree-streamer.o tree-streamer-in.o tree-streamer-out.o tree-tailcall.o tree-vect-generic.o tree-vect-patterns.o tree-vect-data-refs.o tree-vect-stmts.o tree-vect-loop.o tree-vect-loop-manip.o tree-vect-slp.o tree-vectorizer.o tree-vrp.o tree.o valtrack.o value-prof.o var-tracking.o varasm.o varpool.o vmsdbgout.o vtable-verify.o web.o wide-int.o wide-int-print.o xcoffout.o mips.o frame-header-opt.o host-netbsd.o
G_out_file=${GNUHOSTDIST}/gcc/config/mips/mips.c
G_version=6.4.0
G_BUILD_PREFIX=
G_RTL_H=coretypes.h rtl.h rtl.def machmode.h mode-classes.def insn-modes.h reg-notes.def insn-notes.def ${GNUHOSTDIST}/gcc/../libcpp/include/line-map.h input.h real.h machmode.h mode-classes.def insn-modes.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h fixed-value.h machmode.h mode-classes.def insn-modes.h double-int.h alias.h ${GNUHOSTDIST}/gcc/../include/hashtab.h flags.h flag-types.h options.h flag-types.h  ${GNUHOSTDIST}/gcc/config/mips/mips-opts.h genrtl.h
G_RTL_BASE_H=coretypes.h rtl.h rtl.def machmode.h mode-classes.def insn-modes.h reg-notes.def insn-notes.def ${GNUHOSTDIST}/gcc/../libcpp/include/line-map.h input.h real.h machmode.h mode-classes.def insn-modes.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h fixed-value.h machmode.h mode-classes.def insn-modes.h double-int.h alias.h ${GNUHOSTDIST}/gcc/../include/hashtab.h
G_TREE_H=tree.h tree-core.h coretypes.h all-tree.def tree.def c-family/c-common.def ${GNUHOSTDIST}/gcc/cp/cp-tree.def ${GNUHOSTDIST}/gcc/objc/objc-tree.def machmode.h mode-classes.def insn-modes.h builtins.def sync-builtins.def omp-builtins.def gtm-builtins.def sanitizer.def cilkplus.def cilk-builtins.def ${GNUHOSTDIST}/gcc/../libcpp/include/line-map.h input.h statistics.h vec.h statistics.h ggc.h gtype-desc.h statistics.h treestruct.def ${GNUHOSTDIST}/gcc/../include/hashtab.h double-int.h alias.h ${GNUHOSTDIST}/gcc/../libcpp/include/symtab.h ${GNUHOSTDIST}/gcc/../include/obstack.h flags.h flag-types.h options.h flag-types.h  ${GNUHOSTDIST}/gcc/config/mips/mips-opts.h real.h machmode.h mode-classes.def insn-modes.h fixed-value.h machmode.h mode-classes.def insn-modes.h double-int.h  tree-check.h
G_BASIC_BLOCK_H=basic-block.h predict.h predict.def vec.h statistics.h ggc.h gtype-desc.h statistics.h function.h ${GNUHOSTDIST}/gcc/../include/hashtab.h tm.h      options.h ${GNUHOSTDIST}/gcc/config/elfos.h ${GNUHOSTDIST}/gcc/config/vxworks-dummy.h ${GNUHOSTDIST}/gcc/config/mips/mips.h ${GNUHOSTDIST}/gcc/config/mips/elf.h ${GNUHOSTDIST}/gcc/config/netbsd.h ${GNUHOSTDIST}/gcc/config/netbsd-stdint.h ${GNUHOSTDIST}/gcc/config/netbsd-elf.h ${GNUHOSTDIST}/gcc/config/mips/netbsd.h ${GNUHOSTDIST}/gcc/config/mips/netbsd64.h ${GNUHOSTDIST}/gcc/config/initfini-array.h ${GNUHOSTDIST}/gcc/defaults.h insn-constants.h insn-flags.h options.h flag-types.h  ${GNUHOSTDIST}/gcc/config/mips/mips-opts.h hard-reg-set.h vec.h statistics.h ggc.h gtype-desc.h statistics.h ${GNUHOSTDIST}/gcc/../libcpp/include/line-map.h input.h machmode.h mode-classes.def insn-modes.h cfg-flags.def cfghooks.h
G_GCC_H=gcc.h version.h diagnostic-core.h ${GNUHOSTDIST}/gcc/../libcpp/include/line-map.h input.h bversion.h diagnostic.def
G_GGC_H=ggc.h gtype-desc.h statistics.h
G_GTFILES_SRCDIR=
G_GTFILES_FILES_FILES=
G_GTFILES_FILES_LANGS=
G_GTFILES=${GNUHOSTDIST}/gcc/../libcpp/include/line-map.h ${GNUHOSTDIST}/gcc/../libcpp/include/cpplib.h ${GNUHOSTDIST}/gcc/../libcpp/include/cpp-id-data.h ${GNUHOSTDIST}/gcc/input.h ${GNUHOSTDIST}/gcc/coretypes.h auto-host.h ${GNUHOSTDIST}/gcc/../include/ansidecl.h options.h ${GNUHOSTDIST}/gcc/config/elfos.h ${GNUHOSTDIST}/gcc/config/vxworks-dummy.h ${GNUHOSTDIST}/gcc/config/mips/mips.h ${GNUHOSTDIST}/gcc/config/mips/elf.h ${GNUHOSTDIST}/gcc/config/netbsd.h ${GNUHOSTDIST}/gcc/config/netbsd-stdint.h ${GNUHOSTDIST}/gcc/config/netbsd-elf.h ${GNUHOSTDIST}/gcc/config/mips/netbsd.h ${GNUHOSTDIST}/gcc/config/mips/netbsd64.h ${GNUHOSTDIST}/gcc/config/initfini-array.h ${GNUHOSTDIST}/gcc/defaults.h ${GNUHOSTDIST}/gcc/../include/hashtab.h ${GNUHOSTDIST}/gcc/../include/splay-tree.h ${GNUHOSTDIST}/gcc/bitmap.h ${GNUHOSTDIST}/gcc/wide-int.h ${GNUHOSTDIST}/gcc/alias.h ${GNUHOSTDIST}/gcc/coverage.c ${GNUHOSTDIST}/gcc/rtl.h ${GNUHOSTDIST}/gcc/optabs.h ${GNUHOSTDIST}/gcc/tree.h ${GNUHOSTDIST}/gcc/tree-core.h ${GNUHOSTDIST}/gcc/libfuncs.h ${GNUHOSTDIST}/gcc/../libcpp/include/symtab.h ${GNUHOSTDIST}/gcc/../include/obstack.h ${GNUHOSTDIST}/gcc/real.h ${GNUHOSTDIST}/gcc/function.h ${GNUHOSTDIST}/gcc/insn-addr.h ${GNUHOSTDIST}/gcc/hwint.h ${GNUHOSTDIST}/gcc/fixed-value.h ${GNUHOSTDIST}/gcc/output.h ${GNUHOSTDIST}/gcc/cfgloop.h ${GNUHOSTDIST}/gcc/cfg.h ${GNUHOSTDIST}/gcc/cselib.h ${GNUHOSTDIST}/gcc/basic-block.h  ${GNUHOSTDIST}/gcc/ipa-ref.h ${GNUHOSTDIST}/gcc/cgraph.h ${GNUHOSTDIST}/gcc/reload.h ${GNUHOSTDIST}/gcc/caller-save.c ${GNUHOSTDIST}/gcc/symtab.c ${GNUHOSTDIST}/gcc/alias.c ${GNUHOSTDIST}/gcc/bitmap.c ${GNUHOSTDIST}/gcc/cselib.c ${GNUHOSTDIST}/gcc/cgraph.c ${GNUHOSTDIST}/gcc/ipa-prop.c ${GNUHOSTDIST}/gcc/ipa-cp.c ${GNUHOSTDIST}/gcc/ipa-utils.h ${GNUHOSTDIST}/gcc/dbxout.c ${GNUHOSTDIST}/gcc/signop.h ${GNUHOSTDIST}/gcc/dwarf2out.h ${GNUHOSTDIST}/gcc/dwarf2asm.c ${GNUHOSTDIST}/gcc/dwarf2cfi.c ${GNUHOSTDIST}/gcc/dwarf2out.c ${GNUHOSTDIST}/gcc/tree-vect-generic.c ${GNUHOSTDIST}/gcc/dojump.c ${GNUHOSTDIST}/gcc/emit-rtl.h ${GNUHOSTDIST}/gcc/emit-rtl.c ${GNUHOSTDIST}/gcc/except.h ${GNUHOSTDIST}/gcc/explow.c ${GNUHOSTDIST}/gcc/expr.c ${GNUHOSTDIST}/gcc/expr.h ${GNUHOSTDIST}/gcc/function.c ${GNUHOSTDIST}/gcc/except.c ${GNUHOSTDIST}/gcc/gcse.c ${GNUHOSTDIST}/gcc/godump.c ${GNUHOSTDIST}/gcc/lists.c ${GNUHOSTDIST}/gcc/optabs-libfuncs.c ${GNUHOSTDIST}/gcc/profile.c ${GNUHOSTDIST}/gcc/mcf.c ${GNUHOSTDIST}/gcc/reg-stack.c ${GNUHOSTDIST}/gcc/cfgrtl.c ${GNUHOSTDIST}/gcc/sdbout.c ${GNUHOSTDIST}/gcc/stor-layout.c ${GNUHOSTDIST}/gcc/stringpool.c ${GNUHOSTDIST}/gcc/tree.c ${GNUHOSTDIST}/gcc/varasm.c ${GNUHOSTDIST}/gcc/gimple.h ${GNUHOSTDIST}/gcc/gimple-ssa.h ${GNUHOSTDIST}/gcc/tree-chkp.c ${GNUHOSTDIST}/gcc/tree-ssanames.c ${GNUHOSTDIST}/gcc/tree-eh.c ${GNUHOSTDIST}/gcc/tree-ssa-address.c ${GNUHOSTDIST}/gcc/tree-cfg.c ${GNUHOSTDIST}/gcc/tree-dfa.c ${GNUHOSTDIST}/gcc/tree-iterator.c ${GNUHOSTDIST}/gcc/gimple-expr.c ${GNUHOSTDIST}/gcc/tree-chrec.h ${GNUHOSTDIST}/gcc/tree-scalar-evolution.c ${GNUHOSTDIST}/gcc/tree-ssa-operands.h ${GNUHOSTDIST}/gcc/tree-profile.c ${GNUHOSTDIST}/gcc/tree-nested.c ${GNUHOSTDIST}/gcc/omp-low.c ${GNUHOSTDIST}/gcc/omp-low.h ${GNUHOSTDIST}/gcc/targhooks.c ${GNUHOSTDIST}/gcc/config/mips/mips.c ${GNUHOSTDIST}/gcc/passes.c ${GNUHOSTDIST}/gcc/cgraphunit.c ${GNUHOSTDIST}/gcc/cgraphclones.c ${GNUHOSTDIST}/gcc/tree-phinodes.c ${GNUHOSTDIST}/gcc/tree-ssa-alias.h ${GNUHOSTDIST}/gcc/tree-ssanames.h ${GNUHOSTDIST}/gcc/ipa-prop.h ${GNUHOSTDIST}/gcc/trans-mem.c ${GNUHOSTDIST}/gcc/lto-streamer.h ${GNUHOSTDIST}/gcc/target-globals.h ${GNUHOSTDIST}/gcc/ipa-inline.h ${GNUHOSTDIST}/gcc/vtable-verify.c ${GNUHOSTDIST}/gcc/asan.c ${GNUHOSTDIST}/gcc/ubsan.c ${GNUHOSTDIST}/gcc/tsan.c ${GNUHOSTDIST}/gcc/sanopt.c ${GNUHOSTDIST}/gcc/sancov.c ${GNUHOSTDIST}/gcc/ipa-devirt.c ${GNUHOSTDIST}/gcc/internal-fn.h ${GNUHOSTDIST}/gcc/hsa.c [c] ${GNUHOSTDIST}/gcc/c/c-lang.c ${GNUHOSTDIST}/gcc/c/c-tree.h ${GNUHOSTDIST}/gcc/c/c-decl.c ${GNUHOSTDIST}/gcc/c-family/c-common.c ${GNUHOSTDIST}/gcc/c-family/c-common.h ${GNUHOSTDIST}/gcc/c-family/c-objc.h ${GNUHOSTDIST}/gcc/c-family/c-cppbuiltin.c ${GNUHOSTDIST}/gcc/c-family/c-pragma.h ${GNUHOSTDIST}/gcc/c-family/c-pragma.c ${GNUHOSTDIST}/gcc/c/c-objc-common.c ${GNUHOSTDIST}/gcc/c/c-parser.c ${GNUHOSTDIST}/gcc/c/c-lang.h [cp] ${GNUHOSTDIST}/gcc/cp/rtti.c ${GNUHOSTDIST}/gcc/cp/mangle.c ${GNUHOSTDIST}/gcc/cp/name-lookup.h ${GNUHOSTDIST}/gcc/cp/name-lookup.c ${GNUHOSTDIST}/gcc/cp/cp-tree.h ${GNUHOSTDIST}/gcc/cp/decl.h ${GNUHOSTDIST}/gcc/cp/call.c ${GNUHOSTDIST}/gcc/cp/decl.c ${GNUHOSTDIST}/gcc/cp/decl2.c ${GNUHOSTDIST}/gcc/cp/pt.c ${GNUHOSTDIST}/gcc/cp/repo.c ${GNUHOSTDIST}/gcc/cp/semantics.c ${GNUHOSTDIST}/gcc/cp/tree.c ${GNUHOSTDIST}/gcc/cp/parser.h ${GNUHOSTDIST}/gcc/cp/parser.c ${GNUHOSTDIST}/gcc/cp/method.c ${GNUHOSTDIST}/gcc/cp/typeck2.c ${GNUHOSTDIST}/gcc/c-family/c-common.c ${GNUHOSTDIST}/gcc/c-family/c-common.h ${GNUHOSTDIST}/gcc/c-family/c-objc.h ${GNUHOSTDIST}/gcc/c-family/c-lex.c ${GNUHOSTDIST}/gcc/c-family/c-pragma.h ${GNUHOSTDIST}/gcc/c-family/c-pragma.c ${GNUHOSTDIST}/gcc/cp/class.c ${GNUHOSTDIST}/gcc/cp/cp-objcp-common.c ${GNUHOSTDIST}/gcc/cp/cp-lang.c ${GNUHOSTDIST}/gcc/cp/except.c ${GNUHOSTDIST}/gcc/cp/vtable-class-hierarchy.c ${GNUHOSTDIST}/gcc/cp/constexpr.c ${GNUHOSTDIST}/gcc/cp/cp-gimplify.c [jit] ${GNUHOSTDIST}/gcc/jit/dummy-frontend.c [lto] ${GNUHOSTDIST}/gcc/lto/lto-tree.h ${GNUHOSTDIST}/gcc/lto/lto-lang.c ${GNUHOSTDIST}/gcc/lto/lto.c ${GNUHOSTDIST}/gcc/lto/lto.h [objc] ${GNUHOSTDIST}/gcc/objc/objc-map.h ${GNUHOSTDIST}/gcc/c-family/c-objc.h ${GNUHOSTDIST}/gcc/objc/objc-act.h ${GNUHOSTDIST}/gcc/objc/objc-act.c ${GNUHOSTDIST}/gcc/objc/objc-runtime-shared-support.c ${GNUHOSTDIST}/gcc/objc/objc-gnu-runtime-abi-01.c ${GNUHOSTDIST}/gcc/objc/objc-next-runtime-abi-01.c ${GNUHOSTDIST}/gcc/objc/objc-next-runtime-abi-02.c ${GNUHOSTDIST}/gcc/c/c-parser.c ${GNUHOSTDIST}/gcc/c/c-tree.h ${GNUHOSTDIST}/gcc/c/c-decl.c ${GNUHOSTDIST}/gcc/c/c-lang.h ${GNUHOSTDIST}/gcc/c/c-objc-common.c ${GNUHOSTDIST}/gcc/c-family/c-common.c ${GNUHOSTDIST}/gcc/c-family/c-common.h ${GNUHOSTDIST}/gcc/c-family/c-cppbuiltin.c ${GNUHOSTDIST}/gcc/c-family/c-pragma.h ${GNUHOSTDIST}/gcc/c-family/c-pragma.c [objcp] ${GNUHOSTDIST}/gcc/cp/rtti.c ${GNUHOSTDIST}/gcc/cp/mangle.c ${GNUHOSTDIST}/gcc/cp/name-lookup.h ${GNUHOSTDIST}/gcc/cp/name-lookup.c ${GNUHOSTDIST}/gcc/cp/cp-tree.h ${GNUHOSTDIST}/gcc/cp/decl.h ${GNUHOSTDIST}/gcc/cp/call.c ${GNUHOSTDIST}/gcc/cp/decl.c ${GNUHOSTDIST}/gcc/cp/decl2.c ${GNUHOSTDIST}/gcc/cp/pt.c ${GNUHOSTDIST}/gcc/cp/repo.c ${GNUHOSTDIST}/gcc/cp/semantics.c ${GNUHOSTDIST}/gcc/cp/tree.c ${GNUHOSTDIST}/gcc/cp/parser.h ${GNUHOSTDIST}/gcc/cp/parser.c ${GNUHOSTDIST}/gcc/cp/method.c ${GNUHOSTDIST}/gcc/cp/typeck2.c ${GNUHOSTDIST}/gcc/c-family/c-common.c ${GNUHOSTDIST}/gcc/c-family/c-common.h ${GNUHOSTDIST}/gcc/c-family/c-objc.h ${GNUHOSTDIST}/gcc/c-family/c-lex.c ${GNUHOSTDIST}/gcc/c-family/c-pragma.h ${GNUHOSTDIST}/gcc/c-family/c-pragma.c ${GNUHOSTDIST}/gcc/cp/class.c ${GNUHOSTDIST}/gcc/cp/cp-objcp-common.c ${GNUHOSTDIST}/gcc/cp/except.c ${GNUHOSTDIST}/gcc/cp/vtable-class-hierarchy.c ${GNUHOSTDIST}/gcc/cp/constexpr.c ${GNUHOSTDIST}/gcc/cp/cp-gimplify.c ${GNUHOSTDIST}/gcc/objc/objc-map.h ${GNUHOSTDIST}/gcc/objc/objc-act.h ${GNUHOSTDIST}/gcc/objc/objc-act.c ${GNUHOSTDIST}/gcc/objc/objc-runtime-shared-support.c ${GNUHOSTDIST}/gcc/objc/objc-gnu-runtime-abi-01.c ${GNUHOSTDIST}/gcc/objc/objc-next-runtime-abi-01.c ${GNUHOSTDIST}/gcc/objc/objc-next-runtime-abi-02.c ${GNUHOSTDIST}/gcc/c-family/c-cppbuiltin.c
G_GTFILES_LANG_DIR_NAMES=
G_NOEXCEPTION_FLAGS=-fno-exceptions -fno-rtti -fasynchronous-unwind-tables
G_NATIVE_SYSTEM_HEADER_DIR=/usr/include
G_tm_defines=LIBC_GLIBC=1 LIBC_UCLIBC=2 LIBC_BIONIC=3 LIBC_MUSL=4 NETBSD_ENABLE_PTHREADS MIPS_ABI_DEFAULT=ABI_N32
G_host_xm_file=
G_host_xm_defines=
G_tm_p_file=
G_target_cpu_default=((MASK_ABICALLS|MASK_FLOAT64|MASK_SOFT_FLOAT_ABI|MASK_SPLIT_ADDRESSES))|MASK_EXPLICIT_RELOCS
G_TM_H=tm.h      options.h ${GNUHOSTDIST}/gcc/config/elfos.h ${GNUHOSTDIST}/gcc/config/vxworks-dummy.h ${GNUHOSTDIST}/gcc/config/mips/mips.h ${GNUHOSTDIST}/gcc/config/mips/elf.h ${GNUHOSTDIST}/gcc/config/netbsd.h ${GNUHOSTDIST}/gcc/config/netbsd-stdint.h ${GNUHOSTDIST}/gcc/config/netbsd-elf.h ${GNUHOSTDIST}/gcc/config/mips/netbsd.h ${GNUHOSTDIST}/gcc/config/mips/netbsd64.h ${GNUHOSTDIST}/gcc/config/initfini-array.h ${GNUHOSTDIST}/gcc/defaults.h insn-constants.h insn-flags.h options.h flag-types.h  ${GNUHOSTDIST}/gcc/config/mips/mips-opts.h
G_ALL_OPT_FILES=${GNUHOSTDIST}/gcc/lto/lang.opt ${GNUHOSTDIST}/gcc/c-family/c.opt ${GNUHOSTDIST}/gcc/common.opt ${GNUHOSTDIST}/gcc/config/g.opt ${GNUHOSTDIST}/gcc/config/fused-madd.opt ${GNUHOSTDIST}/gcc/config/mips/mips-tables.opt ${GNUHOSTDIST}/gcc/config/mips/mips.opt ${GNUHOSTDIST}/gcc/config/netbsd.opt ${GNUHOSTDIST}/gcc/config/netbsd-elf.opt
G_tm_file_list=options.h ${GNUHOSTDIST}/gcc/config/elfos.h ${GNUHOSTDIST}/gcc/config/vxworks-dummy.h ${GNUHOSTDIST}/gcc/config/mips/mips.h ${GNUHOSTDIST}/gcc/config/mips/elf.h ${GNUHOSTDIST}/gcc/config/netbsd.h ${GNUHOSTDIST}/gcc/config/netbsd-stdint.h ${GNUHOSTDIST}/gcc/config/netbsd-elf.h ${GNUHOSTDIST}/gcc/config/mips/netbsd.h ${GNUHOSTDIST}/gcc/config/mips/netbsd64.h ${GNUHOSTDIST}/gcc/config/initfini-array.h ${GNUHOSTDIST}/gcc/defaults.h
G_build_xm_include_list=auto-build.h ansidecl.h
G_lang_specs_files=${GNUHOSTDIST}/gcc/cp/lang-specs.h ${GNUHOSTDIST}/gcc/lto/lang-specs.h ${GNUHOSTDIST}/gcc/objc/lang-specs.h
G_tm_p_include_list=config/mips/mips-protos.h tm-preds.h
G_common_out_file=${GNUHOSTDIST}/gcc/common/config/mips/mips-common.c
G_LIB2ADDEHDEP=
G_CXX_OBJS=cp-lang.o c-family/stub-objc.o call.o decl.o expr.o pt.o typeck2.o class.o decl2.o error.o lex.o parser.o ptree.o rtti.o typeck.o cvt.o except.o friend.o init.o method.o search.o semantics.o tree.o repo.o dump.o optimize.o mangle.o cp-objcp-common.o name-lookup.o cxx-pretty-print.o cp-cilkplus.o cp-gimplify.o cp-array-notation.o lambda.o vtable-class-hierarchy.o constexpr.o cp-ubsan.o constraint.o logic.o attribs.o incpath.o c-family/c-common.o c-family/c-cppbuiltin.o c-family/c-dump.o c-family/c-format.o c-family/c-gimplify.o c-family/c-indentation.o c-family/c-lex.o c-family/c-omp.o c-family/c-opts.o c-family/c-pch.o c-family/c-ppoutput.o c-family/c-pragma.o c-family/c-pretty-print.o c-family/c-semantics.o c-family/c-ada-spec.o c-family/c-cilkplus.o c-family/array-notation-common.o c-family/cilk.o c-family/c-ubsan.o default-c.o
G_CXX_C_OBJS=attribs.o incpath.o c-family/c-common.o c-family/c-cppbuiltin.o c-family/c-dump.o c-family/c-format.o c-family/c-gimplify.o c-family/c-indentation.o c-family/c-lex.o c-family/c-omp.o c-family/c-opts.o c-family/c-pch.o c-family/c-ppoutput.o c-family/c-pragma.o c-family/c-pretty-print.o c-family/c-semantics.o c-family/c-ada-spec.o c-family/c-cilkplus.o c-family/array-notation-common.o c-family/cilk.o c-family/c-ubsan.o default-c.o
G_F77_OBJS=
G_libcpp_a_OBJS=charset.o directives.o directives-only.o errors.o expr.o files.o identifiers.o init.o lex.o line-map.o macro.o mkdeps.o pch.o symtab.o traditional.o
G_ENABLE_SHARED=yes
G_SHLIB_LINK= -shared
G_SHLIB_MULTILIB=.
