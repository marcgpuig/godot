/*************************************************************************/
/*  texture_basisu.h                                                     */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           GODOT ENGINE                                */
/*                      https://godotengine.org                          */
/*************************************************************************/
/* Copyright (c) 2007-2022 Juan Linietsky, Ariel Manzur.                 */
/* Copyright (c) 2014-2022 Godot Engine contributors (cf. AUTHORS.md).   */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/

#ifndef BASIS_UNIVERSAL_TEXTURE_BASISU_H
#define BASIS_UNIVERSAL_TEXTURE_BASISU_H

#include "scene/resources/texture.h"

#ifdef TOOLS_ENABLED
#include <encoder/basisu_comp.h>
#endif

#include <transcoder/basisu_transcoder.h>

#if 0
class TextureBasisU : public Texture {
	GDCLASS(TextureBasisU, Texture);
	RES_BASE_EXTENSION("butex");

	RID texture;
	Size2 tex_size;

	uint32_t flags = FLAGS_DEFAULT;

	Vector<uint8_t> data;

	static void _bind_methods();

public:

	virtual int get_width() const;
	virtual int get_height() const;
	virtual RID get_rid() const;
	virtual bool has_alpha() const;

	virtual void set_flags(uint32_t p_flags);
	virtual uint32_t get_flags() const;


	Error import(const Ref<Image> &p_img);

	void set_basisu_data(const Vector<uint8_t>& p_data);

	Vector<uint8_t> get_basisu_data() const;
	String get_img_path() const;

	TextureBasisU();
	~TextureBasisU();
};

#endif

#endif // BASIS_UNIVERSAL_TEXTURE_BASISU_H
