#pragma once

#include <d3d8.h>
#include <d3dx8tex.h>
#include <ModLoader/MemAccess.h>
#include "SADXModLoader/SADXStructs.h"

#if defined(_MSC_VER) && _MSC_VER >= 1900
// MSVC 2015 inlines printf() and scanf() functions.
// As a result, MSVCRT no longer has definitions for them, resulting
// in a linker error because d3dx8.lib depends on sprintf().
// Link in legacy_stdio_definitions.lib to fix this.
// Reference: https://msdn.microsoft.com/en-us/library/Bb531344.aspx
#pragma comment(lib, "legacy_stdio_definitions.lib")
#endif

DataPointer(IDirect3DDevice8*, Direct3D_Device, 0x03D128B0);

struct MeshSetBuffer
{
	NJS_MESHSET_SADX* Meshset;
	void *field_4;
	int FVF;
	IDirect3DVertexBuffer8* VertexBuffer;
	int Size;
	IDirect3DIndexBuffer8* IndexBuffer;
	D3DPRIMITIVETYPE PrimitiveType;
	int MinIndex;
	int NumVertecies;
	int StartIndex;
	int PrimitiveCount;
};
