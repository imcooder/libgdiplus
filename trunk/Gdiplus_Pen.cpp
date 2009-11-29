#include "stdafx.h"
#include "GdiplusShunt.h"

//----------------------------------------------------------------------------
// Pen APIs
//----------------------------------------------------------------------------


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreatePen1Ptr)(ARGB color, REAL width, GpUnit unit, GpPen **pen));
DEFINE_MEMBER(GdipCreatePen1);

GpStatus WINGDIPAPI
GdipCreatePen1(ARGB color, REAL width, GpUnit unit, GpPen **pen)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipCreatePen2Ptr)(GpBrush *brush, REAL width, GpUnit unit, GpPen **pen));
DEFINE_MEMBER(GdipCreatePen2);

GpStatus WINGDIPAPI
GdipCreatePen2(GpBrush *brush, REAL width, GpUnit unit, GpPen **pen)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipClonePenPtr)(GpPen *pen, GpPen **clonepen));
DEFINE_MEMBER(GdipClonePen);

GpStatus WINGDIPAPI
GdipClonePen(GpPen *pen, GpPen **clonepen)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipDeletePenPtr)(GpPen *pen));
DEFINE_MEMBER(GdipDeletePen);

GpStatus WINGDIPAPI
GdipDeletePen(GpPen *pen)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenWidthPtr)(GpPen *pen, REAL width));
DEFINE_MEMBER(GdipSetPenWidth);

GpStatus WINGDIPAPI
GdipSetPenWidth(GpPen *pen, REAL width)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenWidthPtr)(GpPen *pen, REAL *width));
DEFINE_MEMBER(GdipGetPenWidth);

GpStatus WINGDIPAPI
GdipGetPenWidth(GpPen *pen, REAL *width)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenUnitPtr)(GpPen *pen, GpUnit unit));
DEFINE_MEMBER(GdipSetPenUnit);

GpStatus WINGDIPAPI
GdipSetPenUnit(GpPen *pen, GpUnit unit)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenUnitPtr)(GpPen *pen, GpUnit *unit));
DEFINE_MEMBER(GdipGetPenUnit);

GpStatus WINGDIPAPI
GdipGetPenUnit(GpPen *pen, GpUnit *unit)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenLineCap197819Ptr)(GpPen *pen, GpLineCap startCap, GpLineCap endCap,
               GpDashCap dashCap));
DEFINE_MEMBER(GdipSetPenLineCap197819);

GpStatus WINGDIPAPI
GdipSetPenLineCap197819(GpPen *pen, GpLineCap startCap, GpLineCap endCap,
                  GpDashCap dashCap)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenStartCapPtr)(GpPen *pen, GpLineCap startCap));
DEFINE_MEMBER(GdipSetPenStartCap);

GpStatus WINGDIPAPI
GdipSetPenStartCap(GpPen *pen, GpLineCap startCap)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenEndCapPtr)(GpPen *pen, GpLineCap endCap));
DEFINE_MEMBER(GdipSetPenEndCap);

GpStatus WINGDIPAPI
GdipSetPenEndCap(GpPen *pen, GpLineCap endCap)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenDashCap197819Ptr)(GpPen *pen, GpDashCap dashCap));
DEFINE_MEMBER(GdipSetPenDashCap197819);

GpStatus WINGDIPAPI
GdipSetPenDashCap197819(GpPen *pen, GpDashCap dashCap)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenStartCapPtr)(GpPen *pen, GpLineCap *startCap));
DEFINE_MEMBER(GdipGetPenStartCap);

GpStatus WINGDIPAPI
GdipGetPenStartCap(GpPen *pen, GpLineCap *startCap)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenEndCapPtr)(GpPen *pen, GpLineCap *endCap));
DEFINE_MEMBER(GdipGetPenEndCap);

GpStatus WINGDIPAPI
GdipGetPenEndCap(GpPen *pen, GpLineCap *endCap)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenDashCap197819Ptr)(GpPen *pen, GpDashCap *dashCap));
DEFINE_MEMBER(GdipGetPenDashCap197819);

GpStatus WINGDIPAPI
GdipGetPenDashCap197819(GpPen *pen, GpDashCap *dashCap)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenLineJoinPtr)(GpPen *pen, GpLineJoin lineJoin));
DEFINE_MEMBER(GdipSetPenLineJoin);

GpStatus WINGDIPAPI
GdipSetPenLineJoin(GpPen *pen, GpLineJoin lineJoin)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenLineJoinPtr)(GpPen *pen, GpLineJoin *lineJoin));
DEFINE_MEMBER(GdipGetPenLineJoin);

GpStatus WINGDIPAPI
GdipGetPenLineJoin(GpPen *pen, GpLineJoin *lineJoin)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenCustomStartCapPtr)(GpPen *pen, GpCustomLineCap* customCap));
DEFINE_MEMBER(GdipSetPenCustomStartCap);

GpStatus WINGDIPAPI
GdipSetPenCustomStartCap(GpPen *pen, GpCustomLineCap* customCap)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenCustomStartCapPtr)(GpPen *pen, GpCustomLineCap** customCap));
DEFINE_MEMBER(GdipGetPenCustomStartCap);

GpStatus WINGDIPAPI
GdipGetPenCustomStartCap(GpPen *pen, GpCustomLineCap** customCap)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenCustomEndCapPtr)(GpPen *pen, GpCustomLineCap* customCap));
DEFINE_MEMBER(GdipSetPenCustomEndCap);

GpStatus WINGDIPAPI
GdipSetPenCustomEndCap(GpPen *pen, GpCustomLineCap* customCap)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenCustomEndCapPtr)(GpPen *pen, GpCustomLineCap** customCap));
DEFINE_MEMBER(GdipGetPenCustomEndCap);

GpStatus WINGDIPAPI
GdipGetPenCustomEndCap(GpPen *pen, GpCustomLineCap** customCap)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenMiterLimitPtr)(GpPen *pen, REAL miterLimit));
DEFINE_MEMBER(GdipSetPenMiterLimit);

GpStatus WINGDIPAPI
GdipSetPenMiterLimit(GpPen *pen, REAL miterLimit)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenMiterLimitPtr)(GpPen *pen, REAL *miterLimit));
DEFINE_MEMBER(GdipGetPenMiterLimit);

GpStatus WINGDIPAPI
GdipGetPenMiterLimit(GpPen *pen, REAL *miterLimit)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenModePtr)(GpPen *pen, GpPenAlignment penMode));
DEFINE_MEMBER(GdipSetPenMode);

GpStatus WINGDIPAPI
GdipSetPenMode(GpPen *pen, GpPenAlignment penMode)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenModePtr)(GpPen *pen, GpPenAlignment *penMode));
DEFINE_MEMBER(GdipGetPenMode);

GpStatus WINGDIPAPI
GdipGetPenMode(GpPen *pen, GpPenAlignment *penMode)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenTransformPtr)(GpPen *pen, GpMatrix *matrix));
DEFINE_MEMBER(GdipSetPenTransform);

GpStatus WINGDIPAPI
GdipSetPenTransform(GpPen *pen, GpMatrix *matrix)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenTransformPtr)(GpPen *pen, GpMatrix *matrix));
DEFINE_MEMBER(GdipGetPenTransform);

GpStatus WINGDIPAPI
GdipGetPenTransform(GpPen *pen, GpMatrix *matrix)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipResetPenTransformPtr)(GpPen *pen));
DEFINE_MEMBER(GdipResetPenTransform);

GpStatus WINGDIPAPI
GdipResetPenTransform(GpPen *pen)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipMultiplyPenTransformPtr)(GpPen *pen, GDIPCONST GpMatrix *matrix,
                                          GpMatrixOrder order));
DEFINE_MEMBER(GdipMultiplyPenTransform);

GpStatus WINGDIPAPI
GdipMultiplyPenTransform(GpPen *pen, GDIPCONST GpMatrix *matrix,
                           GpMatrixOrder order)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipTranslatePenTransformPtr)(GpPen *pen, REAL dx, REAL dy,
                                           GpMatrixOrder order));
DEFINE_MEMBER(GdipTranslatePenTransform);

GpStatus WINGDIPAPI
GdipTranslatePenTransform(GpPen *pen, REAL dx, REAL dy,
                            GpMatrixOrder order)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipScalePenTransformPtr)(GpPen *pen, REAL sx, REAL sy,
                                           GpMatrixOrder order));
DEFINE_MEMBER(GdipScalePenTransform);

GpStatus WINGDIPAPI
GdipScalePenTransform(GpPen *pen, REAL sx, REAL sy,
                            GpMatrixOrder order)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipRotatePenTransformPtr)(GpPen *pen, REAL angle, GpMatrixOrder order));
DEFINE_MEMBER(GdipRotatePenTransform);

GpStatus WINGDIPAPI
GdipRotatePenTransform(GpPen *pen, REAL angle, GpMatrixOrder order)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenColorPtr)(GpPen *pen, ARGB argb));
DEFINE_MEMBER(GdipSetPenColor);

GpStatus WINGDIPAPI
GdipSetPenColor(GpPen *pen, ARGB argb)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenColorPtr)(GpPen *pen, ARGB *argb));
DEFINE_MEMBER(GdipGetPenColor);

GpStatus WINGDIPAPI
GdipGetPenColor(GpPen *pen, ARGB *argb)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenBrushFillPtr)(GpPen *pen, GpBrush *brush));
DEFINE_MEMBER(GdipSetPenBrushFill);

GpStatus WINGDIPAPI
GdipSetPenBrushFill(GpPen *pen, GpBrush *brush)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenBrushFillPtr)(GpPen *pen, GpBrush **brush));
DEFINE_MEMBER(GdipGetPenBrushFill);

GpStatus WINGDIPAPI
GdipGetPenBrushFill(GpPen *pen, GpBrush **brush)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenFillTypePtr)(GpPen *pen, GpPenType* type));
DEFINE_MEMBER(GdipGetPenFillType);

GpStatus WINGDIPAPI
GdipGetPenFillType(GpPen *pen, GpPenType* type)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenDashStylePtr)(GpPen *pen, GpDashStyle *dashstyle));
DEFINE_MEMBER(GdipGetPenDashStyle);

GpStatus WINGDIPAPI
GdipGetPenDashStyle(GpPen *pen, GpDashStyle *dashstyle)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenDashStylePtr)(GpPen *pen, GpDashStyle dashstyle));
DEFINE_MEMBER(GdipSetPenDashStyle);

GpStatus WINGDIPAPI
GdipSetPenDashStyle(GpPen *pen, GpDashStyle dashstyle)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenDashOffsetPtr)(GpPen *pen, REAL *offset));
DEFINE_MEMBER(GdipGetPenDashOffset);

GpStatus WINGDIPAPI
GdipGetPenDashOffset(GpPen *pen, REAL *offset)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenDashOffsetPtr)(GpPen *pen, REAL offset));
DEFINE_MEMBER(GdipSetPenDashOffset);

GpStatus WINGDIPAPI
GdipSetPenDashOffset(GpPen *pen, REAL offset)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenDashCountPtr)(GpPen *pen, INT *count));
DEFINE_MEMBER(GdipGetPenDashCount);

GpStatus WINGDIPAPI
GdipGetPenDashCount(GpPen *pen, INT *count)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenDashArrayPtr)(GpPen *pen, GDIPCONST REAL *dash, INT count));
DEFINE_MEMBER(GdipSetPenDashArray);

GpStatus WINGDIPAPI
GdipSetPenDashArray(GpPen *pen, GDIPCONST REAL *dash, INT count)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenDashArrayPtr)(GpPen *pen, REAL *dash, INT count));
DEFINE_MEMBER(GdipGetPenDashArray);

GpStatus WINGDIPAPI
GdipGetPenDashArray(GpPen *pen, REAL *dash, INT count)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenCompoundCountPtr)(GpPen *pen, INT *count));
DEFINE_MEMBER(GdipGetPenCompoundCount);

GpStatus WINGDIPAPI
GdipGetPenCompoundCount(GpPen *pen, INT *count)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipSetPenCompoundArrayPtr)(GpPen *pen, GDIPCONST REAL *dash, INT count));
DEFINE_MEMBER(GdipSetPenCompoundArray);

GpStatus WINGDIPAPI
GdipSetPenCompoundArray(GpPen *pen, GDIPCONST REAL *dash, INT count)
{
    return NotImplemented;
}


DEFINE_POINTER(GpStatus (WINGDIPAPI *GdipGetPenCompoundArrayPtr)(GpPen *pen, REAL *dash, INT count));
DEFINE_MEMBER(GdipGetPenCompoundArray);

GpStatus WINGDIPAPI
GdipGetPenCompoundArray(GpPen *pen, REAL *dash, INT count)
{
    return NotImplemented;
}


//----------------------------------------------------------------------------
// Platform Shunt
//----------------------------------------------------------------------------

VOID WINAPI
Gdiplus_PenInit()
{
}

