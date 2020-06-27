#define DWG_TYPE DWG_TYPE_BLOCKGRIPLOCATIONCOMPONENT
#include "common.c"

void
api_process (dwg_object *obj)
{
  int error, isnew;
  Dwg_EvalExpr evalexpr;
  // AcDbBlockGripExpr
  BITCODE_BL grip_type;
  BITCODE_T eval_expr; // one of: X Y UpdatedX UpdatedY DisplacementX DisplacementY

  Dwg_Version_Type dwg_version = obj->parent->header.version;
  dwg_obj_blockgriplocationcomponent *_obj = dwg_object_to_BLOCKGRIPLOCATIONCOMPONENT (obj);

  CHK_EVALEXPR (BLOCKVISIBILITYGRIP);
  CHK_ENTITY_TYPE (_obj, BLOCKVISIBILITYGRIP, grip_type, BL);
  CHK_ENTITY_UTF8TEXT (_obj, BLOCKVISIBILITYGRIP, eval_expr);
}
