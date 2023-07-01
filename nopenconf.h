/* See LICENSE file for copyright and license details. */

#define BROWSER "qutebrowser"
#define VIDEOPLAYER "mpv"
#define IMAGEVIEWER "feh"
#define PDFVIEWER "mupdf"

/* {} will be substituted with the actual argument when the rule is executed */
struct rule rules[] = {
	{ .regex = "\\.(avi|mp4|mkv|mp3|ogg|flac|mov)$", .file = VIDEOPLAYER, .argv = { VIDEOPLAYER, "{}", NULL } },
	{ .regex = "\\.(png|jpg|gif)$", .file = IMAGEVIEWER, .argv = { IMAGEVIEWER, "{}", NULL} },
	{ .regex = "\\.(html|svg)$", .file = BROWSER, .argv = { BROWSER, "{}", NULL } },
	{ .regex = "\\.pdf$", .file = PDFVIEWER, .argv = { PDFVIEWER, "{}", NULL} },
	{ .regex = "\\.sh$", .file = "sh", .argv = { "sh", "{}", NULL} },
	{ .regex = ".", .file = "vim", .argv = { "vim", "{}", NULL } },
};
