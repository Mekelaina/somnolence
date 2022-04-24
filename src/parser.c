#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "script.h"
#include "keywords.h"
#include "slre.h"


#define NEWLINE ' '

static const char *nums = "/^[+-]?([0-9]+\\.?[0-9]*|\\.[0-9]+)$/"; 


