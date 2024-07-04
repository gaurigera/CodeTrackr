# A Version Control System using C++
This VCS is built to understand the internal workings of pre-existing VCS.

There are three types of objects used in the VCS, namely:
1. Blob
2. Tree
3. Commit

Features currently developed:
1) Repository gets initialized with the .vc folder.

Features to be added (in future):
1) An interactive CLI for handling user interaction.
2) Locking of shared files 
3) Addition of background threads for tracking files in real-time.

Justification of the hashing design:

Storage of metadata:


.
├── branches
├── COMMIT_EDITMSG
├── config
├── description
├── FETCH_HEAD
├── HEAD
├── hooks
│   ├── applypatch-msg.sample
│   ├── commit-msg.sample
│   ├── fsmonitor-watchman.sample
│   ├── post-update.sample
│   ├── pre-applypatch.sample
│   ├── pre-commit.sample
│   ├── pre-merge-commit.sample
│   ├── prepare-commit-msg.sample
│   ├── pre-push.sample
│   ├── pre-rebase.sample
│   ├── pre-receive.sample
│   ├── push-to-checkout.sample
│   └── update.sample
├── index
├── info
│   ├── exclude
│   └── refs
├── logs
│   ├── HEAD
│   └── refs
│       ├── heads
│       │   └── main
│       └── remotes
│           └── origin
│               └── main
├── objects
│   ├── 01
│   │   └── 0bb786512c05b614c9acbec3377bd2c820bae0
│   ├── 13
│   │   └── fde52fb5d36a7020803afd71c74b7313b50e6d
│   ├── 1c
│   │   └── ebbecbb11fec821a12b12a3eb83b5df65947cf
│   ├── 29
│   │   └── acd333757a4f5d72173a960fbdf744b7e2be87
│   ├── 2c
│   │   └── 0dd888516a0e640929c930bc6d54e243f0733d
│   ├── 41
│   │   └── ed9a2d275c0e8569afe1c23cfab974b087b746
│   ├── 43
│   │   └── 5d1f28027e898e07e9cf361e824c254fe27e22
│   ├── 52
│   │   └── 0d31b70ad3c9fd64736d8b1e8773755b42918a
│   ├── 54
│   │   └── 324d188f52cecf6719c314ed9432baead69f5e
│   ├── 59
│   │   └── 8a461873cb0b692c577806a8e83fc74354783b
│   ├── 60
│   │   └── 3db603e07b472e9b0a95dd3ff1e03b70a6755f
│   ├── 66
│   │   └── 8410989c05db51a2d00ec1e7e7ce6f2f918c7f
│   ├── 67
│   │   └── cfd2fd5174fb5bd2ec7f492e7c890bb8804f42
│   ├── 92
│   │   └── 6db8aedc24493d14d7607a8e335acfbb62b4b5
│   ├── a3
│   │   └── 1938325a9dfb6afaf4c534ef2a4cba1fa0372b
│   ├── af
│   │   └── 488e29f71397ccde408495c9a5935622ecc24d
│   ├── b4
│   │   └── e2430abec8814dc13cd6c809378ebdca7f807d
│   ├── b8
│   │   └── aba1e2e974ebcb05c8efede9688455d39c485c
│   ├── ba
│   │   └── 92f5f8f340cf87fef42034c823a1d4299844c0
│   ├── c2
│   │   ├── 7cfe871f134f5253a7cf97a5d75ac1df75416e
│   │   └── dc4297f5453fd332ff41e0a335a661f3b8dedd
│   ├── c7
│   │   └── fa6a8b0f91820a2fcf1fa95723904d045567a2
│   ├── d8
│   │   └── 17c0e11754cf05c0dfc32982a32b199cb5d6dc
│   ├── dd
│   │   └── 31260a43fdd53fe37fd5f21bfa0d438ef87c38
│   ├── de
│   │   └── 162e6b50d39e9cd2db2a13ae08aa2ae5b556cc
│   ├── info
│   │   ├── commit-graph
│   │   └── packs
│   └── pack
│       ├── pack-25c000299818eaa7980b00660aa237d32543757e.idx
│       └── pack-25c000299818eaa7980b00660aa237d32543757e.pack
├── ORIG_HEAD
├── packed-refs
└── refs
    ├── heads
    │   └── main
    ├── remotes
    │   └── origin
    │       └── main
    └── tags

40 directories, 57 files

[View of the diagrams created](https://excalidraw.com/#room=bf91971b039c071c548f,-4tmEF0cYZPAs-ZHzqiW6A)
