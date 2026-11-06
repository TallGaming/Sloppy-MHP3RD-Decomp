# Monster Hunter Portable 3rd matching decompilation research

We are working toward readable source that rebuilds **Monster Hunter Portable
3rd, Japanese PSP release ULJM05800 v1.02**, byte for byte. The matching
campaign is paused after completing 596 of 1,077 function attempts. The
[campaign inventory](campaign-source-export/LIBRARY.json) records every function
and links the published source.

Project repository: [TallGaming/Sloppy-MHP3RD-Decomp](https://github.com/TallGaming/Sloppy-MHP3RD-Decomp).

**Start with [HELP_WANTED](docs/HELP_WANTED.md)** for the compiler problem,
reviewed function ranges, source drafts, exact diagnostic results and questions.
[CURRENT_STATUS](docs/CURRENT_STATUS.md) separates verified results from open work.

The private main EBOOT rebuilt byte for byte at **843 credited C functions**.
The historical toolchain is **not locked**, and all 355 known overlays remain
unbuilt. Public tests exercise tooling and invented fixtures. Game verification
requires separate local inputs.

This repository contains authored research, source hypotheses, invented fixtures
and Python tooling. Game images, extracted assets/code dumps, save data,
proprietary compilers/SDKs, keys and private execution evidence are excluded.
Use your own matching game image and separately obtained development tools.

## Reproduce the public tooling

Python 3.11 or newer is recommended. The tests use invented inputs and mocks;
they do not need a game image or proprietary compiler:

```sh
python -m unittest discover -s tests -v
```

[The minimal diagnostic guide](tools/repro/README.md) provides the fixed compiler
commands and a pure offline object/reference comparison tool. It never executes
PSP code and does not publish any original reference bytes.

[REPRODUCIBILITY](docs/REPRODUCIBILITY.md) explains the difference between that
public repro and private historical investigation records. The repository is not
a complete build or a portable SDK installation.

## Working rules

- Start with natural, readable C/C++, with a purpose header and useful comments.
- Never tune compiler flags for individual functions. Investigate original
  project-wide toolchain settings explicitly before locking them.
- After about three plain attempts or 30 minutes, document/count any necessary
  matching tricks; visibly park a function if it remains unmatched.
- Keep Sony SDK and positively identified third-party library code labeled
  assembly. Only reconstruct the game's own code.
- Credit a rewrite only after a clean byte-identical build and the required
  checks prove source participation and reject stale objects/assembly fallback.

A native Windows/Linux port is a later objective, after all game code matches.
No playable native port is included in this snapshot. See [CONTRIBUTING](CONTRIBUTING.md)
before submitting findings or patches.

For what follows compiler identification, read [the matching roadmap](docs/AFTER_TOOLCHAIN.md).
For code contributions, follow [the matching guide](docs/MATCHING_GUIDE.md) and
[task template](docs/MATCHING_TASK_TEMPLATE.md).

## Documentation

[Documentation index](docs/INDEX.md) · [Current handoff](HANDOFF.md) ·
[Historical research](docs/history/README_2026-10-31.md) ·
[Publication contents](docs/publication/README.md) · [License status](LICENSE_STATUS.md)

The [initial publication checks](docs/publication/PUBLICATION_CHECK.md) record
the 2026-10-31 export. See [current status](docs/CURRENT_STATUS.md) for the
campaign checkpoint.

Earlier checkpoint pages are preserved as dated research records. Their local
evidence paths and earlier privacy decisions are historical; the current public
status takes precedence. The local decomp.me instance described there is an
operator workbench, not a hosted public demo.
