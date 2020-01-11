static const char norm_fg[] = "#d0dfe4";
static const char norm_bg[] = "#20191f";
static const char norm_border[] = "#919c9f";

static const char sel_fg[] = "#d0dfe4";
static const char sel_bg[] = "#A37E82";
static const char sel_border[] = "#d0dfe4";

static const char urg_fg[] = "#d0dfe4";
static const char urg_bg[] = "#6B857B";
static const char urg_border[] = "#6B857B";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
