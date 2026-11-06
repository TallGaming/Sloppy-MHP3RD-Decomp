/* Partial dependency view for the game's ad hoc network scan results.
 * The import and copy interface are known. The enclosing callback and its
 * object layout still need a caller-backed reconstruction.
 */
extern int FUN_08961100(int *length, void *buffer); /* sceNetAdhocctlGetScanInfo */
extern void FUN_088ebb18(void *destination, const void *source, unsigned int size);
