//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "kbselect", 0, 30}, */
	/* {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9}, */
	{"",	"$HOME/.scripts/dwmblocks/music",	0,	11},
	/* {"",	"pacpackages",	0,	8}, */
	/* {"",	"news",		0,	6}, */
	{"",	"$HOME/.scripts/dwmblocks/crypto",	0,	13},
	/* {"",	"price lbc \"LBRY Token\" 📚",			9000,	22}, */
	/* {"",	"price bat \"Basic Attention Token\" 🦁",	9000,	20}, */
	/* {"",	"price link \"Chainlink\" 🔗",			300,	25}, */
	/* {"",	"price xmr \"Monero\" 🔒",			9000,	24}, */
	/* {"",	"price eth Ethereum 🍸",	9000,	23}, */
	/* {"",	"price btc Bitcoin 💰",				9000,	21}, */
	/* {"",	"torrent",	20,	7}, */
	{"",	"$HOME/.scripts/dwmblocks/memory",	10,	14},
	{"",	"$HOME/.scripts/dwmblocks/cpu",		10,	18},
	/* {"",	"moonphase",	18000,	17}, */
	/* {"",	"forecast",	18000,	5}, */
	/* {"",	"mailbox",	180,	12}, */
	/* {"",	"nettraf",	1,	16}, */
	{"",	"$HOME/.scripts/dwmblocks/volume",	0,	10},
	{"",	"$HOME/.scripts/dwmblocks/battery",	5,	3},
	{"",	"$HOME/.scripts/dwmblocks/clock",	60,	1},
	{"",	"$HOME/.scripts/dwmblocks/internet",	5,	4},
	{"",	"$HOME/.scripts/dwmblocks/help-icon",	0,	15},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
