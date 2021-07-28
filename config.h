// dmenu

// topbar
static int topbar = 1;

// centered
static int centered = 0;

// min width when centered
static int min_width = 500;

// colored prompt
static int colorprompt = 1;

// font
static char font[] = "monospace:size=10";
static const char *fonts[] = {
	font,
	"Noto Color Emoji:style=Regular:size=16",
};

// alpha
static const unsigned int alpha = 0xff;

// prompt
static char *prompt = NULL;

// colors
static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";

// color array
static char *colors[SchemeLast][2] = {
	//               fg           bg
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut]  = { "#000000",   "#00ffff" },
};

// alphas
static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = { OPAQUE, alpha },
    [SchemeSel] = { OPAQUE, alpha },
    [SchemeOut] = { OPAQUE, alpha },
};

// lines for vertical dmenu
static unsigned int lines = 0;

// chars not considered part of word
static const char worddelimiters[] = " ";

// border width
static unsigned int border_width = 5;

// xresources
ResourcePref resources[] = {
	{ "font",         STRING,  &font         },
	{ "normfgcolor",  STRING,  &normfgcolor  },
	{ "normbgcolor",  STRING,  &normbgcolor  },
	{ "selfgcolor",   STRING,  &selfgcolor   },
	{ "selbgcolor",   STRING,  &selbgcolor   },
	{ "prompt",       STRING,  &prompt       },
    { "min_width",    INTEGER, &min_width    },
    { "colorprompt",  INTEGER, &colorprompt  },
    { "border_width", INTEGER, &border_width },
};
