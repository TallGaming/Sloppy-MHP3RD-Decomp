# Public snapshot contents

The initial 2026-10-31 snapshot is an authored-text export of the local research project. It includes
the source hypotheses, invented fixtures, Python tools/tests and documentation.
The working repository and its private material were preserved separately.

Excluded: game images/assets/code dumps, saves, proprietary compilers/SDKs,
private raw reports, source caches, binaries, credentials and local service state.
Two machine-specific decomp.me operator scripts are also omitted. Their dated
documentation remains as historical research, not a runnable hosted service.

Original root README, AGENTS and HANDOFF documents are retained in docs/history/
with historical notices. The current root pages take precedence. Inaccessible
local evidence links are rendered as explicit local-only artifact references,
not broken public download links.

For the initial snapshot, SOURCE_EXPORT.json records original authored-file hashes and adapted public-copy
hashes. Game-related bench drafts retain their original bytes. Personal paths
and current-versus-historical status are adjusted for publication; old evidence
hashes are not rewritten to manufacture new validation claims.

The [initial publication checks](PUBLICATION_CHECK.md) record the original
clean-tree test, content scan and Git review.

## 2026-11-06 source publication

The [source tree](../../src/) contains all 843 verified C files, reviewed parked
drafts and an address-only symbol map. The [EBOOT index](../../src/eboot/INDEX.json)
records 1,990 parked entries and 264 library identifications. Sixteen parked
entries have metadata only. The private build configuration, game inputs and
third-party library implementations remain local.

The [campaign inventory](../../campaign-source-export/LIBRARY.json) still
records all 1,077 campaign outcomes. Its source links now point into the main
source tree, including all 22 campaign matches and 504 parked entries. One
previously archived draft, `FUN_0880ea5c`, is metadata-only in the current tree
pending source-provenance review. See [current status](../CURRENT_STATUS.md)
for verification and coverage.
