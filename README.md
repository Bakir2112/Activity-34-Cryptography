# Activity-34-Cryptography
# Caesar Cipher Cryptosystem

project/
│
├── main.c
├── src/
│   └── caesar.c
└── include/
    └── caesar.h





## Modularization Approach
- **CLI:** Implemented in `main.c`. Handles menu, user input, and program control.
- **Cipher logic:** Implemented in `src/caesar.c` for code clarity and reuse.
- **Header:** `include/caesar.h` defines the interface and Doxygen documentation.

Each module has a single responsibility:
- `main.c` → user interaction
- `caesar.c` → encryption/decryption logic
- `caesar.h` → shared function declarations
