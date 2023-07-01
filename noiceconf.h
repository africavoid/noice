/* See LICENSE file for copyright and license details. */
#define CWD   ""
#define CURSR " -> "
#define EMPTY "   "

#define NOPEN "nopen"

int dirorder    = 0; /* Set to 1 to sort by directory first */
int mtimeorder  = 0; /* Set to 1 to sort by time modified */
int icaseorder  = 0; /* Set to 1 to sort by ignoring case */
int versorder   = 0; /* Set to 1 to sort by version number */
int idletimeout = 0; /* Screensaver timeout in seconds, 0 to disable */
int showhidden  = 0; /* Set to 1 to show hidden files by default */
int usecolor    = 0; /* Set to 1 to enable color attributes */
char *idlecmd   = "rain"; /* The screensaver program */

/* See curs_attr(3) for valid video attributes */
#define CURSR_ATTR A_NORMAL
#define DIR_ATTR   A_NORMAL | COLOR_PAIR(4)
#define LINK_ATTR  A_NORMAL | COLOR_PAIR(6)
#define SOCK_ATTR  A_NORMAL | COLOR_PAIR(1)
#define FIFO_ATTR  A_NORMAL | COLOR_PAIR(5)
#define EXEC_ATTR  A_NORMAL | COLOR_PAIR(2)

/* Colors to use with COLOR_PAIR(n) as attributes */
struct cpair pairs[] = {
	{ .fg = 0, .bg = 0 },
	/* pairs start at 1 */
	{ COLOR_RED,     -1 },
	{ COLOR_GREEN,   -1 },
	{ COLOR_YELLOW,  -1 },
	{ COLOR_BLUE,    -1 },
	{ COLOR_MAGENTA, -1 },
	{ COLOR_CYAN,    -1 },
};

struct key bindings[] = {
	{ 'q',            SEL_QUIT },
	{ 'h',            SEL_BACK },
	{ 'l',            SEL_GOIN },
	{ '/',            SEL_FLTR },
	{ 'j',            SEL_NEXT },
	{ 'k',            SEL_PREV },
	{ '$',            SEL_END },
	{ 'c',            SEL_CD },
	{ '~',            SEL_CDHOME },
	{ '.',            SEL_TOGGLEDOT },
	{ 'd',            SEL_DSORT },
	{ 'r',            SEL_MTIME },
	{ 'i',            SEL_ICASE },
	{ 't',            SEL_RUN, "sh", "htop" },
	{ ':',		  SEL_RUN, "sh", "SHELL" },
};
