// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_SYM, BSPC), U_LT(U_NUM, RET),  U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp PSCRN,         &kp F7,            &kp F8,            &kp F9,            &kp F12,           \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp SLCK,          &kp F4,            &kp F5,            &kp F6,            &kp F11,           \
U_NA,              &kp RALT,          &u_to_U_MEDIA,     &u_to_U_FUN,       U_NA,              &kp PAUSE_BREAK,   &kp F1,            &kp F2,            &kp F3,            &kp F10,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp SPACE,         &kp TAB,           &kp K_APP,         U_NP,              U_NP

