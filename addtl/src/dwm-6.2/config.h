/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int    borderpx = 1;     /* border pixel of windows */
static const unsigned int        snap = 32;    /* snap pixel */
static const unsigned int      gappih = 10;    /* horiz inner gap between windows */
static const unsigned int      gappiv = 10;    /* vert inner gap between windows */
static const unsigned int      gappoh = 10;    /* horiz outer gap between windows and screen edge */
static const unsigned int      gappov = 10;    /* vert outer gap between windows and screen edge */
static const          int   smartgaps = 1;     /* 0 means no outer gap when there is only one window */
static const          int     showbar = 1;     /* 0 means no bar */
static const          int      topbar = 1;     /* 0 means bottom bar */
static const         char    *fonts[] = {"monospace:pixelsize=12:antialias=true:autohint=true"};
static const         char dmenufont[] =  "monospace:pixelsize=12:antialias=true:autohint=true";
static const         char col_black[] = "#000000";
static const         char col_gray1[] = "#222222";
static const         char col_gray2[] = "#444444";
static const         char col_gray3[] = "#bbbbbb";
static const         char col_gray4[] = "#eeeeee";
static const         char col_white[] = "#ffffff";
static const         char col_cyan1[] = "#0055aa";
static const         char col_cyan2[] = "#00aaff";
static const unsigned int    baralpha = 0xc0;
static const unsigned int borderalpha = OPAQUE; // OPAQUE = 0xffU

static const char *colors[][3] =
{
    /*               fg         bg         border   */
     [SchemeNorm] = {col_white, col_black, col_black},
      [SchemeSel] = {col_white, col_cyan1, col_cyan2},
    [SchemeTitle] = {col_white, col_black, col_cyan2},
};
static const unsigned int alphas[][3] =
{
    /*              fg      bg        border     */
    [SchemeNorm] = {OPAQUE, baralpha, borderalpha},
     [SchemeSel] = {OPAQUE, baralpha, borderalpha},
   [SchemeTitle] = {OPAQUE, baralpha, borderalpha},
};

/* tagging */
static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };

static const Rule rules[] = {
    /* xprop(1):
     *  WM_CLASS(STRING) = instance, class
     *  WM_NAME(STRING) = title
     */
    /* class      instance    title       tags mask     isfloating   monitor */
    { "Gimp",     NULL,       NULL,       0,            1,           -1 },
    { "Firefox",  NULL,       NULL,       1 << 8,       0,           -1 },
};

/* layout(s) */
static const float       mfact = 0.50; /* factor of master area size [0.05..0.95] */
static const   int     nmaster = 1;    /* number of clients in master area */
static const   int resizehints = 1;    /* 1 means respect size hints in tiled resizals */

#include "fibonacci.c"
#include "gaplessgrid.c"
#include "grid.c"
#include "horizgrid.c"

static const Layout layouts[] = {
/*  symbol  arrangement */
    {"T", tile},    /* first entry is default */
    {"M", monocle},
    {"@", spiral},
    {"-", dwindle},
    {"|", bstack},
    {"=", bstackhoriz},
    {"+", grid},
    {"#", gaplessgrid},
    {"_", horizgrid},
    {" ", NULL},    /* no layout function means floating behavior */
    {NULL,  NULL},
};

/* key definitions */
#define MODKEY Mod4Mask
#define MOD1 Mod1Mask /* Alt */
#define MOD2 Mod2Mask /* Num-Lock */
#define MOD3 Mod3Mask /* Menu */
#define MOD4 Mod4Mask /* Super */
#define MOD5 Mod5Mask /* ? */
#define CTRL ControlMask
#define SHFT ShiftMask
#define TAGKEYS(KEY,TAG) \
    { MODKEY,                       KEY,      view,           {.ui = 1 << TAG}}, \
    { MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG}}, \
    { MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG}}, \
    { MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG}},

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL }}

/* commands */
/* component of dmenucmd, manipulated in spawn() */
static char dmenumon[2] = "0";
static const char *dmenucmd[] =
{
    "dmenu_run",
    "-m",  dmenumon,
    "-fn", dmenufont,
    "-nb", col_black,
    "-nf", col_gray3,
    "-sb", col_cyan2,
    "-sf", col_white,
    NULL
};
static const char *termcmd[]  = { "st", NULL };

static Key keys[] = {
    TAGKEYS(XK_1, 0)
    TAGKEYS(XK_2, 1)
    TAGKEYS(XK_3, 2)
    TAGKEYS(XK_4, 3)
    TAGKEYS(XK_5, 4)
    TAGKEYS(XK_6, 5)
    TAGKEYS(XK_7, 6)
    TAGKEYS(XK_8, 7)
    TAGKEYS(XK_9, 8)

  /* modifier           key             function        argument */
    {MOD4,              XK_q,           killclient,     {0}},
    {MOD4,              XK_s,           swapfocus,      {.i = -1}},
    {MOD4,              XK_j,           focusstack,     {.i = +1}},
    {MOD4,              XK_k,           focusstack,     {.i = -1}},
    {MOD4|SHFT,         XK_j,           movestack,      {.i = +1}},
    {MOD4|SHFT,         XK_k,           movestack,      {.i = -1}},
    {MOD4|CTRL,         XK_j,           rotatestack,    {.i = +1}},
    {MOD4|CTRL,         XK_k,           rotatestack,    {.i = -1}},
    {MOD3,              XK_period,      cyclelayout,    {.i = +1}},
    {MOD3,              XK_comma,       cyclelayout,    {.i = -1}},
    {MOD4,              XK_space,       zoom,           {0}},
    {MOD4,              XK_l,           setmfact,       {.f = +0.01}},
    {MOD4,              XK_h,           setmfact,       {.f = -0.01}},
    {MOD3,              XK_1,           setmfact,       {.f =  1.50}},
    {MOD4,              XK_i,           incnmaster,     {.i = +1}},
    {MOD4,              XK_o,           incnmaster,     {.i = -1}},
    {MOD4,              XK_b,           togglebar,      {0}},
    {MOD4,              XK_t,           setlayout,      {.v = &layouts[0]}},
    {MOD4,              XK_Tab,         view,           {0}},
    {MOD4,              XK_backslash,   view,           {0}},
    {MOD4|SHFT,         XK_space,       togglefloating, {0}},
    {MOD4,              XK_space,       setlayout,      {0}},

    /* Monitor Controls */
//  {MOD4,              XK_comma,       focusmon,       {.i = -1}},
//  {MOD4,              XK_period,      focusmon,       {.i = +1}},
//  {MOD4|SHFT,         XK_comma,       tagmon,         {.i = -1}},
//  {MOD4|SHFT,         XK_period,      tagmon,         {.i = +1}},

    {MOD3,              XK_equal,       setborderpx,    {.i = +1}},
    {MOD3,              XK_minus,       setborderpx,    {.i = -1}},
    {MOD3,              XK_0,           setborderpx,    {.i =  0}},

    /* Gap Controls  */
    {MOD3|CTRL,         XK_0,           tglgaps,        {0}},
    {MOD3|SHFT,         XK_0,           defgaps,        {0}},
    {MOD3,              XK_i,           chgaps,         {.i = +1}},
    {MOD3,              XK_u,           chgaps,         {.i = -1}},
    {MOD3|CTRL,         XK_i,           chigaps,        {.i = +1}},
    {MOD3|CTRL,         XK_u,           chigaps,        {.i = -1}},
    {MOD3|SHFT,         XK_i,           chogaps,        {.i = +1}},
    {MOD3|SHFT,         XK_u,           chogaps,        {.i = -1}},
    {MOD3,              XK_l,           chhgaps,        {.i = +1}},
    {MOD3,              XK_h,           chhgaps,        {.i = -1}},
    {MOD3,              XK_k,           chvgaps,        {.i = +1}},
    {MOD3,              XK_j,           chvgaps,        {.i = -1}},
    {MOD3|CTRL,         XK_l,           chihgaps,       {.i = +1}},
    {MOD3|CTRL,         XK_h,           chihgaps,       {.i = -1}},
    {MOD3|CTRL,         XK_k,           chivgaps,       {.i = +1}},
    {MOD3|CTRL,         XK_j,           chivgaps,       {.i = -1}},
    {MOD3|SHFT,         XK_l,           chihgaps,       {.i = +1}},
    {MOD3|SHFT,         XK_h,           chohgaps,       {.i = -1}},
    {MOD3|SHFT,         XK_k,           chovgaps,       {.i = +1}},
    {MOD3|SHFT,         XK_j,           chovgaps,       {.i = -1}},

/*  More Controls  */
    {MOD4,              XK_0,           view,           {.ui = ~0}},
    {MOD4|SHFT,         XK_0,           tag,            {.ui = ~0}},
    {MOD4,              XK_Page_Up,     shiftview,      {.i = +1}},
    {MOD4,              XK_Page_Down,   shiftview,      {.i = -1}},
    {MOD3,              XK_q,           quit,           {0}}
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
    /* click            event mask    button          function        argument */
    {ClkLtSymbol,      0,            Button1,        setlayout,      {0}},
    {ClkLtSymbol,      0,            Button3,        setlayout,      {.v = &layouts[2]}},
    {ClkWinTitle,      0,            Button2,        zoom,           {0}},
    {ClkStatusText,    0,            Button2,        spawn,          {.v = termcmd }},
    {ClkClientWin,     MOD4,         Button1,        movemouse,      {0}},
    {ClkClientWin,     MOD4,         Button2,        togglefloating, {0}},
    {ClkClientWin,     MOD4,         Button3,        resizemouse,    {0}},
    {ClkTagBar,        0,            Button1,        view,           {0}},
    {ClkTagBar,        0,            Button3,        toggleview,     {0}},
    {ClkTagBar,        MOD4,         Button1,        tag,            {0}},
    {ClkTagBar,        MOD4,         Button3,        toggletag,      {0}},
};

