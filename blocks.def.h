//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",  "~/.local/bin/nettraf",  1,  16},
  {" 🔆 ", "~/.local/bin/brightness", 6, 1},
  {"",  "~/.local/bin/cpu",    10, 18}, 
  {"",  "~/.local/bin/memory", 10,  14},
  {"",  "~/.local/bin/volume", 1,  10},
  {"",  "~/.local/bin/clock",  1, 1},
  {"",  "~/.local/bin/internet", 5,  4},
  {"",  "~/.local/bin/battery",  5,  3},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 2;
