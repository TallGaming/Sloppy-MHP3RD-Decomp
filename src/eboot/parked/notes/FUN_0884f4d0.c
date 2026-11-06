/*
 * FUN_0884f4d0 field view.
 *
 * The straight-line 272-byte wrapper invokes the verified page-state tick,
 * descriptor batch, descriptor dispatch, and page-frame paths.  Its first
 * input owns a PageState subrecord at +0x14d0.  The target-specific sources
 * of the page/count and trailing signed coordinates need a complete local
 * register/stack reconstruction, so this is intentionally uncompiled.
 */
typedef struct PageState PageState;

void FUN_0884f4d0(PageState *owner, int descriptor_value,
                  int page_or_count, int trailing_value);
