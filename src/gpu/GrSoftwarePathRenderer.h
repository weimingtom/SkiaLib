
/*
 * Copyright 2012 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef GrSoftwarePathRenderer_DEFINED
#define GrSoftwarePathRenderer_DEFINED

#include "GrPathRenderer.h"

class GrSoftwarePathRenderer : public GrPathRenderer {
public:
    GrSoftwarePathRenderer(GrContext* context) 
        : fContext(context) {
    }

    virtual bool canDrawPath(const SkPath& path,
                            GrPathFill fill,
                            const GrDrawTarget* target,
                            bool antiAlias) const SK_OVERRIDE;
protected:
    virtual bool onDrawPath(const SkPath& path,
                            GrPathFill fill,
                            const GrVec* translate,
                            GrDrawTarget* target,
                            GrDrawState::StageMask stageMask,
                            bool antiAlias) SK_OVERRIDE;
 
private:
    GrContext*     fContext;

    typedef GrPathRenderer INHERITED;
};

#endif
