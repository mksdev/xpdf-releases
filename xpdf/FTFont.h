//========================================================================
//
// FTFont.h
//
// An X wrapper for the FreeType font rasterizer.
//
//========================================================================

#ifndef FTFONT_H
#define FTFONT_H

#if HAVE_FREETYPE_FREETYPE_H | HAVE_FREETYPE_H
#if FREETYPE2

#ifdef __GNUC__
#pragma interface
#endif

#if HAVE_FREETYPE_FREETYPE_H
#include <freetype/freetype.h>
#else
#include <freetype.h>
#endif
#include "SFont.h"

class FontEncoding;

//------------------------------------------------------------------------

class FTFontEngine: public SFontEngine {
public:

  FTFontEngine(Display *display, Visual *visual, int depth,
	       Colormap colormap, GBool aa);
  GBool isOk() { return ok; }
  virtual ~FTFontEngine();

private:

  FT_Library lib;
  GBool aa;
  Gulong palette[5];
  GBool ok;

  friend class FTFontFile;
  friend class FTFont;
};

//------------------------------------------------------------------------

class FTFontFile: public SFontFile {
public:

  FTFontFile(FTFontEngine *engine, char *fontFileName,
	     FontEncoding *fontEnc);
  GBool isOk() { return ok; }
  virtual ~FTFontFile();

private:

  FTFontEngine *engine;
  FT_Face face;
  int charMapOffset;
  Guint glyphMap[256];
  GBool useGlyphMap;
  GBool ok;

  friend class FTFont;
};

//------------------------------------------------------------------------

struct FTFontCacheTag {
  Gushort code;
  Gushort mru;			// valid bit (0x8000) and MRU index
  int x, y, w, h;		// offset and size of glyph
};

class FTFont: public SFont {
public:

  FTFont(FTFontFile *fontFile, double *m);
  GBool isOk() { return ok; }
  virtual ~FTFont();
  virtual GBool drawChar(Drawable d, int w, int h, GC gc,
			 int x, int y, int r, int g, int b, Gushort c);

private:

  Guchar *getGlyphPixmap(Gushort c, int *x, int *y, int *w, int *h);

  FTFontFile *fontFile;
  FT_Size sizeObj;
  XImage *image;
  FT_Matrix matrix;
  int glyphW, glyphH;		// size of glyph pixmaps
  int glyphSize;		// size of glyph pixmaps, in bytes
  Guchar *cache;		// glyph pixmap cache
  FTFontCacheTag *cacheTags;	// cache tags, i.e., char codes
  int cacheSets;		// number of sets in cache
  int cacheAssoc;		// cache associativity (glyphs per set)
  GBool ok;
};

#endif // FREETYPE2
#endif // HAVE_FREETYPE_FREETYPE_H | HAVE_FREETYPE_H

#endif
