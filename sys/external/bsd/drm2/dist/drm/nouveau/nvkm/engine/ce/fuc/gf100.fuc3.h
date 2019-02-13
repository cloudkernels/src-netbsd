/*	$NetBSD: gf100.fuc3.h,v 1.2 2018/08/27 04:58:31 riastradh Exp $	*/

uint32_t gf100_ce_data[] = {
/* 0x0000: ctx_object */
	0x00000000,
/* 0x0004: ctx_query_address_high */
	0x00000000,
/* 0x0008: ctx_query_address_low */
	0x00000000,
/* 0x000c: ctx_query_counter */
	0x00000000,
/* 0x0010: ctx_src_address_high */
	0x00000000,
/* 0x0014: ctx_src_address_low */
	0x00000000,
/* 0x0018: ctx_src_pitch */
	0x00000000,
/* 0x001c: ctx_src_tile_mode */
	0x00000000,
/* 0x0020: ctx_src_xsize */
	0x00000000,
/* 0x0024: ctx_src_ysize */
	0x00000000,
/* 0x0028: ctx_src_zsize */
	0x00000000,
/* 0x002c: ctx_src_zoff */
	0x00000000,
/* 0x0030: ctx_src_xoff */
	0x00000000,
/* 0x0034: ctx_src_yoff */
	0x00000000,
/* 0x0038: ctx_src_cpp */
	0x00000000,
/* 0x003c: ctx_dst_address_high */
	0x00000000,
/* 0x0040: ctx_dst_address_low */
	0x00000000,
/* 0x0044: ctx_dst_pitch */
	0x00000000,
/* 0x0048: ctx_dst_tile_mode */
	0x00000000,
/* 0x004c: ctx_dst_xsize */
	0x00000000,
/* 0x0050: ctx_dst_ysize */
	0x00000000,
/* 0x0054: ctx_dst_zsize */
	0x00000000,
/* 0x0058: ctx_dst_zoff */
	0x00000000,
/* 0x005c: ctx_dst_xoff */
	0x00000000,
/* 0x0060: ctx_dst_yoff */
	0x00000000,
/* 0x0064: ctx_dst_cpp */
	0x00000000,
/* 0x0068: ctx_format */
	0x00000000,
/* 0x006c: ctx_swz_const0 */
	0x00000000,
/* 0x0070: ctx_swz_const1 */
	0x00000000,
/* 0x0074: ctx_xcnt */
	0x00000000,
/* 0x0078: ctx_ycnt */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
/* 0x0100: dispatch_table */
	0x00010000,
	0x00000000,
	0x00000000,
	0x00010040,
	0x0001019f,
	0x00000000,
	0x00010050,
	0x000101a1,
	0x00000000,
	0x00070080,
	0x0000001c,
	0xfffff000,
	0x00000020,
	0xfff80000,
	0x00000024,
	0xffffe000,
	0x00000028,
	0xfffff800,
	0x0000002c,
	0xfffff000,
	0x00000030,
	0xfff80000,
	0x00000034,
	0xffffe000,
	0x00070088,
	0x00000048,
	0xfffff000,
	0x0000004c,
	0xfff80000,
	0x00000050,
	0xffffe000,
	0x00000054,
	0xfffff800,
	0x00000058,
	0xfffff000,
	0x0000005c,
	0xfff80000,
	0x00000060,
	0xffffe000,
	0x000200c0,
	0x000104b8,
	0x00000000,
	0x00010541,
	0x00000000,
	0x000e00c3,
	0x00000010,
	0xffffff00,
	0x00000014,
	0x00000000,
	0x0000003c,
	0xffffff00,
	0x00000040,
	0x00000000,
	0x00000018,
	0xfff80000,
	0x00000044,
	0xfff80000,
	0x00000074,
	0xffff0000,
	0x00000078,
	0xffffe000,
	0x00000068,
	0xfccc0000,
	0x0000006c,
	0x00000000,
	0x00000070,
	0x00000000,
	0x00000004,
	0xffffff00,
	0x00000008,
	0x00000000,
	0x0000000c,
	0x00000000,
	0x00000800,
};

uint32_t gf100_ce_code[] = {
/* 0x0000: main */
	0x04fe04bd,
	0x3517f000,
	0xf10010fe,
	0xf1040017,
	0xf0fff327,
	0x12d00023,
	0x0c25f0c0,
	0xf40012d0,
	0x17f11031,
	0x27f01200,
	0x0012d003,
/* 0x002f: spin */
	0xf40031f4,
	0x0ef40028,
/* 0x0035: ih */
	0x8001cffd,
	0xf40812c4,
	0x21f4060b,
/* 0x0041: ih_no_chsw */
	0x0412c4ca,
	0xf5070bf4,
/* 0x004b: ih_no_cmd */
	0xc4010221,
	0x01d00c11,
/* 0x0053: swctx */
	0xf101f840,
	0xfe770047,
	0x47f1004b,
	0x44cf2100,
	0x0144f000,
	0xb60444b6,
	0xf7f13040,
	0xf4b6061c,
	0x1457f106,
	0x00f5d101,
	0xb6043594,
	0x57fe0250,
	0x0145fe00,
	0x010052b7,
	0x00ff67f1,
	0x56fd60bd,
	0x0253f004,
	0xf80545fa,
	0x0053f003,
	0xd100e7f0,
	0x549800fe,
	0x0845b600,
	0xb6015698,
	0x46fd1864,
	0x0047fe05,
	0xf00204b9,
	0x01f40643,
	0x0604fa09,
/* 0x00c3: swctx_load */
	0xfa060ef4,
/* 0x00c6: swctx_done */
	0x03f80504,
/* 0x00ca: chsw */
	0x27f100f8,
	0x23cf1400,
	0x1e3fc800,
	0xf4170bf4,
	0x21f40132,
	0x1e3af053,
	0xf00023d0,
	0x24d00147,
/* 0x00eb: chsw_no_unload */
	0xcf00f880,
	0x3dc84023,
	0x090bf41e,
	0xf40131f4,
/* 0x00fa: chsw_finish_load */
	0x37f05321,
	0x8023d002,
/* 0x0102: dispatch */
	0x37f100f8,
	0x32cf1900,
	0x0033cf40,
	0x07ff24e4,
	0xf11024b6,
	0xbd010057,
/* 0x011b: dispatch_loop */
	0x5874bd64,
	0x57580056,
	0x0450b601,
	0xf40446b8,
	0x76bb4d08,
	0x0447b800,
	0xbb0f08f4,
	0x74b60276,
	0x0057bb03,
/* 0x013f: dispatch_valid_mthd */
	0xbbdf0ef4,
	0x44b60246,
	0x0045bb03,
	0xfd014598,
	0x54b00453,
	0x201bf400,
	0x58004558,
	0x64b00146,
	0x091bf400,
	0xf4005380,
/* 0x0166: dispatch_cmd */
	0x32f4300e,
	0xf455f901,
	0x0ef40c01,
/* 0x0171: dispatch_invalid_bitfield */
	0x0225f025,
/* 0x0174: dispatch_illegal_mthd */
/* 0x0177: dispatch_error */
	0xf10125f0,
	0xd0100047,
	0x43d00042,
	0x4027f040,
/* 0x0187: hostirq_wait */
	0xcf0002d0,
	0x24f08002,
	0x0024b040,
/* 0x0193: dispatch_done */
	0xf1f71bf4,
	0xf01d0027,
	0x23d00137,
/* 0x019f: cmd_nop */
	0xf800f800,
/* 0x01a1: cmd_pm_trigger */
	0x0027f100,
	0xf034bd22,
	0x23d00233,
/* 0x01af: cmd_exec_set_format */
	0xf400f800,
	0x01b0f030,
	0x0101b000,
	0xb00201b0,
	0x04980301,
	0x3045c71a,
	0xc70150b6,
	0x60b63446,
	0x3847c701,
	0xf40170b6,
	0x84bd0232,
/* 0x01da: ncomp_loop */
	0x4ac494bd,
	0x0445b60f,
/* 0x01e2: bpc_loop */
	0xa430b4bd,
	0x0f18f404,
	0xbbc0a5ff,
	0x31f400cb,
	0x220ef402,
/* 0x01f4: cmp_c0 */
	0xf00c1bf4,
	0xcbbb10c7,
	0x160ef400,
/* 0x0200: cmp_c1 */
	0xf406a430,
	0xc7f00c18,
	0x00cbbb14,
/* 0x020f: cmp_zero */
	0xf1070ef4,
/* 0x0213: bpc_next */
	0x380080c7,
	0x80b601c8,
	0x01b0b601,
	0xf404b5b8,
	0x90b6c308,
	0x0497b801,
	0xfdb208f4,
	0x06800065,
	0x1d08980e,
	0xf40068fd,
	0x64bd0502,
/* 0x023c: dst_xcnt */
	0x800075fd,
	0x78fd1907,
	0x1057f100,
	0x0654b608,
	0xd00056d0,
	0x50b74057,
	0x06980800,
	0x0162b619,
	0x980864b6,
	0x72b60e07,
	0x0567fd01,
	0xb70056d0,
	0xb4010050,
	0x56d00060,
	0x0160b400,
	0xb44056d0,
	0x56d00260,
	0x0360b480,
	0xb7c056d0,
	0x98040050,
	0x56d01b06,
	0x1c069800,
	0xf44056d0,
	0x00f81030,
/* 0x029c: cmd_exec_set_surface_tiled */
	0xc7075798,
	0x78c76879,
	0x0380b664,
	0xb06077c7,
	0x1bf40e76,
	0x0477f009,
/* 0x02b7: xtile64 */
	0xf00f0ef4,
	0x70b6027c,
	0x0947fd11,
/* 0x02c3: xtileok */
	0x980677f0,
	0x5b980c5a,
	0x00abfd0e,
	0xbb01b7f0,
	0xb2b604b7,
	0xc4abff01,
	0x9805a7bb,
	0xe7f00d5d,
	0x04e8bb01,
	0xff01e2b6,
	0xd8bbb4de,
	0x01e0b605,
	0xbb0cef94,
	0xfefd02eb,
	0x026cf005,
	0x020860b7,
	0xd00864b6,
	0xb7bb006f,
	0x00cbbb04,
	0x98085f98,
	0xfbfd0e5b,
	0x01b7f000,
	0xb604b7bb,
	0xfbbb01b2,
	0x05f7bb00,
	0x5f98f0f9,
	0x01b7f009,
	0xb604b8bb,
	0xfbbb01b2,
	0x05f8bb00,
	0x78bbf0f9,
	0x0282b600,
	0xbb01b7f0,
	0xb9bb04b8,
	0x0b589804,
	0xbb01e7f0,
	0xe2b604e9,
	0xf48eff01,
	0xbb04f7bb,
	0x79bb00cf,
	0x0589bb00,
	0x90fcf0fc,
	0xbb00d9fd,
	0x89fd00ad,
	0x008ffd00,
	0xbb00a8bb,
	0x92b604a7,
	0x0497bb01,
	0x988069d0,
	0x58980557,
	0x00acbb04,
	0xb6007abb,
	0x84b60081,
	0x058bfd10,
	0x060062b7,
	0xb70067d0,
	0xd0040060,
	0x00f80068,
/* 0x03a8: cmd_exec_set_surface_linear */
	0xb7026cf0,
	0xb6020260,
	0x57980864,
	0x0067d005,
	0x040060b7,
	0xb6045798,
	0x67d01074,
	0x0060b700,
	0x06579804,
	0xf80067d0,
/* 0x03d1: cmd_exec_wait */
	0xf900f900,
	0x0007f110,
	0x0604b608,
/* 0x03dc: loop */
	0xf00001cf,
	0x1bf40114,
	0xfc10fcfa,
/* 0x03eb: cmd_exec_query */
	0xc800f800,
	0x1bf40d34,
	0xd121f570,
	0x0c47f103,
	0x0644b608,
	0xb6020598,
	0x45d00450,
	0x4040d000,
	0xd00c57f0,
	0x40b78045,
	0x05980400,
	0x1054b601,
	0xb70045d0,
	0xf1050040,
	0xf00b0057,
	0x45d00153,
	0x4057f100,
	0x0154b640,
	0x808053f1,
	0xf14045d0,
	0xf1111057,
	0xd0131253,
	0x57f18045,
	0x53f11514,
	0x45d01716,
	0x0157f1c0,
	0x0153f026,
	0x080047f1,
	0xd00644b6,
/* 0x045e: query_counter */
	0x21f50045,
	0x47f103d1,
	0x44b6080c,
	0x02059806,
	0xd00045d0,
	0x57f04040,
	0x8045d004,
	0x040040b7,
	0xb6010598,
	0x45d01054,
	0x0040b700,
	0x0057f105,
	0x0045d003,
	0x111057f1,
	0x131253f1,
	0x984045d0,
	0x40b70305,
	0x45d00500,
	0x0157f100,
	0x0153f026,
	0x080047f1,
	0xd00644b6,
	0x00f80045,
/* 0x04b8: cmd_exec */
	0x03d121f5,
	0xf4003fc8,
	0x21f50e0b,
	0x47f101af,
	0x0ef40200,
/* 0x04cd: cmd_exec_no_format */
	0x1067f11e,
	0x0664b608,
	0x800177f0,
	0x07800e07,
	0x1d079819,
	0xd00067d0,
	0x44bd4067,
/* 0x04e8: cmd_exec_init_src_surface */
	0xbd0232f4,
	0x043fc854,
	0xf50a0bf4,
	0xf403a821,
/* 0x04fa: src_tiled */
	0x21f50a0e,
	0x49f0029c,
/* 0x0501: cmd_exec_init_dst_surface */
	0x0231f407,
	0xc82c57f0,
	0x0bf4083f,
	0xa821f50a,
	0x0a0ef403,
/* 0x0514: dst_tiled */
	0x029c21f5,
/* 0x051b: cmd_exec_kick */
	0xf10849f0,
	0xb6080057,
	0x06980654,
	0x4056d01e,
	0xf14167f0,
	0xfd440063,
	0x54d00546,
	0x0c3fc800,
	0xf5070bf4,
/* 0x053f: cmd_exec_done */
	0xf803eb21,
/* 0x0541: cmd_wrcache_flush */
	0x0027f100,
	0xf034bd22,
	0x23d00133,
	0x0000f800,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};
