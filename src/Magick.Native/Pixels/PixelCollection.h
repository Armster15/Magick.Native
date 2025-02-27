// Copyright Dirk Lemstra https://github.com/dlemstra/Magick.Native.
// Licensed under the Apache License, Version 2.0.
#pragma once

MAGICK_NATIVE_EXPORT CacheView *PixelCollection_Create(const Image *, ExceptionInfo **);

MAGICK_NATIVE_EXPORT void PixelCollection_Dispose(CacheView *);

MAGICK_NATIVE_EXPORT const Quantum *PixelCollection_GetArea(const CacheView *, const size_t, const size_t, const size_t, const size_t, ExceptionInfo **);

MAGICK_NATIVE_EXPORT void PixelCollection_SetArea(CacheView *, const size_t, const size_t, const size_t, const size_t, const Quantum *, const size_t, ExceptionInfo **);

MAGICK_NATIVE_EXPORT unsigned char *PixelCollection_ToByteArray(const CacheView *, const size_t, const size_t, const size_t, const size_t, const char *, ExceptionInfo **);

MAGICK_NATIVE_EXPORT unsigned short *PixelCollection_ToShortArray(const CacheView *, const size_t, const size_t, const size_t, const size_t, const char *, ExceptionInfo **);
