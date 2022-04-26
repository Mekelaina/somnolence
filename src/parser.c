#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "script.h"
//#include "keywords.h"
#include "slre.h"
#include "token.h"
#include "vector.h"


static const char space = ' ';
static const char label = '@';
static const char colon = ':';
static const char double_quote = '\"';
static const char single_quote = '\'';
static const char escape = '\\';
static const char comment = '#';

static const char *nums = "/^[+-]?([0-9]+\\.?[0-9]*|\\.[0-9]+)$/"; 
static const char *hexs = "^[A-Fa-f0-9]+$";

//Token[] tokens 


