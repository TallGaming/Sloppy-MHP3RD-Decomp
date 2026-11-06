# Current status

The first matching target is Monster Hunter Portable 3rd, Japanese PSP release
**ULJM05800 v1.02**. HD support is deferred. The goal is readable source that
rebuilds all game executables/code modules byte for byte, preserving assets.
This repository contains research tools and diagnostic source drafts, not a
playable game, complete decompilation or native port.

The 2026-11-06 campaign checkpoint is recorded in the
[campaign inventory](../campaign-source-export/LIBRARY.json). The
[public source tree](../src/) contains the complete verified C set and the
reviewed parked drafts.

| Measure | Status |
| --- | --- |
| Campaign state | Paused with no active assignments |
| Completed attempts | 596 of 1,077, including 22 verified C matches, 62 verified library identifications and 512 parked functions |
| Attempt timing | 558 verified and 38 waived |
| Untouched functions | 481 |
| Private main EBOOT gate | Byte-identical at 843 credited C functions, with all required negative checks passing and zero failures |
| Historical compiler, assembler, linker and global flags | Unresolved |
| Known overlay images | All 355 remain unbuilt |
| Public tooling suite on Windows | 362 tests run, with 360 passes and two platform skips |

The private main gate uses non-public inputs and evidence. Public tests exercise
safe tooling and invented fixtures; they cannot establish a game build or the
private-gate pass reported above. Game images, extracted code/data, disassembly,
compiler/SDK binaries, original dumps, credentials and local evidence paths are
not shipped. The known 355-overlay set is not a proved all-code denominator.

The four generated-switch-table results are `FUN_0885b8cc`, `FUN_0885be6c`,
`FUN_0885c144`, and `FUN_0885d0b0`. They remain isolated and parked pending
placement support for compiler-generated tables in the main build.

## Earlier archive-key investigation

The linked executable's `.comment` contains `MW MIPS C Compiler (2.4.1.01)`.
This records toolchain involvement somewhere in image construction; it does not
identify every function's compiler, source language or original project flags.
One sampled initialization unit is compatible with GNU C++ conventions, which
are not an exclusive compiler/version fingerprint.

| Routine | Complete original interval, exclusive end | Original bytes | State |
| --- | --- | ---: | --- |
| Archive-key initializer, analysis name | [0x0886233C, 0x08862380) | 68 | PARKED: three plain forms and one documented matching shape remain nonexact |
| Archive-key advance, analysis name | [0x08862700, 0x0886278C) | 140 | One plain source hypothesis; four fixed C++/O2 pipelines remain nonexact |

Original interval SHA256 identities are respectively
`7d089e6e2131eb950e3d72ee437c4aab2ec4a775e0baf8c4d45901cb227cee57`
and `0ff874a4e619b6a6202257c13125a9ed1ed5dab4c45cbc0242eb9ad5f0a3261f`.
They identify locally reviewed bytes; the bytes themselves are not distributed.

Bucket 3AL completed two control-first trials. Each first reproduced four
complete historical invented C++ producer objects. Its unchanged
[advance draft](../bench/archive_key_advance.cpp) then produced:

| Existing fixed pipeline | Complete function bytes | First differing byte | Both trials |
| --- | ---: | ---: | --- |
| Metrowerks PSP 3.0.1 build 219, C++/O2 | 124 | 5 | NONEXACT |
| PSP GCC 3.3.3 package 1.7.1, C++/O2 | 140 | 0 | NONEXACT |
| SNC PSP 1.2.7503.0, C++/O2 | 116 | 2 | NONEXACT |
| PSP GCC 4.3.5, C++/O2, previously reviewed assembler ABI | 100 | 10 | NONEXACT |

Complete corresponding objects repeat byte for byte. Equal size under GCC 3.3.3
is not identity. It uses reciprocal-product lowering but differs in address
construction, registers, reduction instructions and scheduling. The other tested
outputs use hardware division. These facts do not select a historical compiler
or justify changing a game function's flags.

Bucket 3AM is **deferred, UNREVIEWED for execution**. Its proposed eight-setting
matrix uses invented arithmetic/address fixtures only. Source/help/ISA review
started, but the whole new controller/profile was not approved/frozen and no
matrix compiler execution occurred before publication preparation. It has no result.

A source-rule audit of Detect-It-Easy found that its relevant ELF MWCC rule
searches `.comment`, rather than recognizing MIPS instructions. No scanner was
installed or executed; no signature hit or new attribution is claimed.

This earlier archive-key investigation recorded four plain hypotheses across
two routines, five retained drafts, one parked routine, one commented matching
shape, zero register pins and zero empty-asm lines. Four compiler profiles and fresh
repeat runs do not count as additional source hypotheses.

## Future port scope

Finish matching all game code before native-port implementation. The future
first playable milestone targets Windows 10/11 and Linux, initially Steam Deck
Desktop Mode, with single-player village/one-hunt gameplay. Original timing and
mechanics, gamepad/right-stick camera support, PSP-compatible saves and existing
local downloaded quests are requirements. Translation and co-op follow later.
No renderer/backend is selected and no game is shipped here.

See [help wanted](HELP_WANTED.md) and [contribution rules](../CONTRIBUTING.md).
The numerical results summarize private repeat/audit records; no inaccessible
public evidence downloads or independently reproducible game build are implied.
