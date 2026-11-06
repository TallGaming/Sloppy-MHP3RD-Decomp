/* Purpose: return the byte span of a nonempty encoded-text sequence by
 * summing the text helper's lead-byte widths. Malformed lead bytes retain the
 * helper's zero-width behavior; no recovery policy is invented here. */
typedef unsigned char u8;
extern int FUN_0882db94(void *context, u8 lead);
int FUN_0882dc08(void *context, char *text)
{ int total=0; if(*text!=0) { do { int width=FUN_0882db94(context,(u8)*text); text+=width; total+=width; } while(*text!=0); } return total; }
