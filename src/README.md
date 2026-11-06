# Main EBOOT source

This archive contains reconstructed source for the Japanese PSP release of
Monster Hunter Portable 3rd, ULJM05800 v1.02.

| Directory or file | Contents |
| --- | --- |
| [eboot/matched](eboot/matched/) | All 843 C files credited by the private byte-identical main EBOOT gate |
| [eboot/parked](eboot/parked/) | Files for 1,974 parked functions and 103 additional drafts or supporting files |
| [eboot/parked/notes](eboot/parked/notes/) | 157 notes-only files included in the parked totals |
| [eboot/INDEX.json](eboot/INDEX.json) | Function IDs, statuses, source paths and SHA-256 hashes |
| [eboot/symbols.s](eboot/symbols.s) | Assembly symbol declarations and address aliases |

The index records all 1,990 parked entries and 264 library identifications.
Six function addresses appear in both historical categories. Sixteen parked
entries have metadata only. Additional drafts can include earlier attempts
for a function that later matched.

The sources depend on game symbols and routines beyond the published set.
The private gate, original game input and library implementations remain
local. See [current status](../docs/CURRENT_STATUS.md) for the verification
result and the [campaign inventory](../campaign-source-export/LIBRARY.json)
for the paused 1,077-function queue.
