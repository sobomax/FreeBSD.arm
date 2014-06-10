/*
 * Copyright 2011 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) AND/OR ITS SUPPLIERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * Authors:
 *     Alex Deucher <alexander.deucher@amd.com>
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: head/sys/dev/drm2/radeon/si_blit_shaders.c 254885 2013-08-25 19:37:15Z dumbbell $");

#include <dev/drm2/drmP.h>

const u32 si_default_state[] =
{
	0xc0066900,
	0x00000000,
	0x00000060, /* DB_RENDER_CONTROL */
	0x00000000, /* DB_COUNT_CONTROL */
	0x00000000, /* DB_DEPTH_VIEW */
	0x0000002a, /* DB_RENDER_OVERRIDE */
	0x00000000, /* DB_RENDER_OVERRIDE2 */
	0x00000000, /* DB_HTILE_DATA_BASE */

	0xc0046900,
	0x00000008,
	0x00000000, /* DB_DEPTH_BOUNDS_MIN */
	0x00000000, /* DB_DEPTH_BOUNDS_MAX */
	0x00000000, /* DB_STENCIL_CLEAR */
	0x00000000, /* DB_DEPTH_CLEAR */

	0xc0036900,
	0x0000000f,
	0x00000000, /* DB_DEPTH_INFO */
	0x00000000, /* DB_Z_INFO */
	0x00000000, /* DB_STENCIL_INFO */

	0xc0016900,
	0x00000080,
	0x00000000, /* PA_SC_WINDOW_OFFSET */

	0xc00d6900,
	0x00000083,
	0x0000ffff, /* PA_SC_CLIPRECT_RULE */
	0x00000000, /* PA_SC_CLIPRECT_0_TL */
	0x20002000, /* PA_SC_CLIPRECT_0_BR */
	0x00000000,
	0x20002000,
	0x00000000,
	0x20002000,
	0x00000000,
	0x20002000,
	0xaaaaaaaa, /* PA_SC_EDGERULE */
	0x00000000, /* PA_SU_HARDWARE_SCREEN_OFFSET */
	0x0000000f, /* CB_TARGET_MASK */
	0x0000000f, /* CB_SHADER_MASK */

	0xc0226900,
	0x00000094,
	0x80000000, /* PA_SC_VPORT_SCISSOR_0_TL */
	0x20002000, /* PA_SC_VPORT_SCISSOR_0_BR */
	0x80000000,
	0x20002000,
	0x80000000,
	0x20002000,
	0x80000000,
	0x20002000,
	0x80000000,
	0x20002000,
	0x80000000,
	0x20002000,
	0x80000000,
	0x20002000,
	0x80000000,
	0x20002000,
	0x80000000,
	0x20002000,
	0x80000000,
	0x20002000,
	0x80000000,
	0x20002000,
	0x80000000,
	0x20002000,
	0x80000000,
	0x20002000,
	0x80000000,
	0x20002000,
	0x80000000,
	0x20002000,
	0x80000000,
	0x20002000,
	0x00000000, /* PA_SC_VPORT_ZMIN_0 */
	0x3f800000, /* PA_SC_VPORT_ZMAX_0 */

	0xc0026900,
	0x000000d9,
	0x00000000, /* CP_RINGID */
	0x00000000, /* CP_VMID */

	0xc0046900,
	0x00000100,
	0xffffffff, /* VGT_MAX_VTX_INDX */
	0x00000000, /* VGT_MIN_VTX_INDX */
	0x00000000, /* VGT_INDX_OFFSET */
	0x00000000, /* VGT_MULTI_PRIM_IB_RESET_INDX */

	0xc0046900,
	0x00000105,
	0x00000000, /* CB_BLEND_RED */
	0x00000000, /* CB_BLEND_GREEN */
	0x00000000, /* CB_BLEND_BLUE */
	0x00000000, /* CB_BLEND_ALPHA */

	0xc0016900,
	0x000001e0,
	0x00000000, /* CB_BLEND0_CONTROL */

	0xc00e6900,
	0x00000200,
	0x00000000, /* DB_DEPTH_CONTROL */
	0x00000000, /* DB_EQAA */
	0x00cc0010, /* CB_COLOR_CONTROL */
	0x00000210, /* DB_SHADER_CONTROL */
	0x00010000, /* PA_CL_CLIP_CNTL */
	0x00000004, /* PA_SU_SC_MODE_CNTL */
	0x00000100, /* PA_CL_VTE_CNTL */
	0x00000000, /* PA_CL_VS_OUT_CNTL */
	0x00000000, /* PA_CL_NANINF_CNTL */
	0x00000000, /* PA_SU_LINE_STIPPLE_CNTL */
	0x00000000, /* PA_SU_LINE_STIPPLE_SCALE */
	0x00000000, /* PA_SU_PRIM_FILTER_CNTL */
	0x00000000, /*  */
	0x00000000, /*  */

	0xc0116900,
	0x00000280,
	0x00000000, /* PA_SU_POINT_SIZE */
	0x00000000, /* PA_SU_POINT_MINMAX */
	0x00000008, /* PA_SU_LINE_CNTL */
	0x00000000, /* PA_SC_LINE_STIPPLE */
	0x00000000, /* VGT_OUTPUT_PATH_CNTL */
	0x00000000, /* VGT_HOS_CNTL */
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
	0x00000000, /* VGT_GS_MODE */

	0xc0026900,
	0x00000292,
	0x00000000, /* PA_SC_MODE_CNTL_0 */
	0x00000000, /* PA_SC_MODE_CNTL_1 */

	0xc0016900,
	0x000002a1,
	0x00000000, /* VGT_PRIMITIVEID_EN */

	0xc0016900,
	0x000002a5,
	0x00000000, /* VGT_MULTI_PRIM_IB_RESET_EN */

	0xc0026900,
	0x000002a8,
	0x00000000, /* VGT_INSTANCE_STEP_RATE_0 */
	0x00000000,

	0xc0026900,
	0x000002ad,
	0x00000000, /* VGT_REUSE_OFF */
	0x00000000,

	0xc0016900,
	0x000002d5,
	0x00000000, /* VGT_SHADER_STAGES_EN */

	0xc0016900,
	0x000002dc,
	0x0000aa00, /* DB_ALPHA_TO_MASK */

	0xc0066900,
	0x000002de,
	0x00000000, /* PA_SU_POLY_OFFSET_DB_FMT_CNTL */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,

	0xc0026900,
	0x000002e5,
	0x00000000, /* VGT_STRMOUT_CONFIG */
	0x00000000,

	0xc01b6900,
	0x000002f5,
	0x76543210, /* PA_SC_CENTROID_PRIORITY_0 */
	0xfedcba98, /* PA_SC_CENTROID_PRIORITY_1 */
	0x00000000, /* PA_SC_LINE_CNTL */
	0x00000000, /* PA_SC_AA_CONFIG */
	0x00000005, /* PA_SU_VTX_CNTL */
	0x3f800000, /* PA_CL_GB_VERT_CLIP_ADJ */
	0x3f800000, /* PA_CL_GB_VERT_DISC_ADJ */
	0x3f800000, /* PA_CL_GB_HORZ_CLIP_ADJ */
	0x3f800000, /* PA_CL_GB_HORZ_DISC_ADJ */
	0x00000000, /* PA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_0 */
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
	0xffffffff, /* PA_SC_AA_MASK_X0Y0_X1Y0 */
	0xffffffff,

	0xc0026900,
	0x00000316,
	0x0000000e, /* VGT_VERTEX_REUSE_BLOCK_CNTL */
	0x00000010, /*  */
};

const u32 si_default_size = DRM_ARRAY_SIZE(si_default_state);
