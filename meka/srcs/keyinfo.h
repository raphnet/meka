//-----------------------------------------------------------------------------
// MEKA - keysname.h
// Keyboard Keys Names - Headers
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// Definitions
//-----------------------------------------------------------------------------

#define KEY_INFO_PRINTABLE    (0x01)
#define KEY_INFO_ALLOW_USE    (0x02)

//-----------------------------------------------------------------------------
// Data
//-----------------------------------------------------------------------------

struct t_key_info
{
    int         scancode;
    const char *name;
    int         flags;
};

//-----------------------------------------------------------------------------
// Functions
//-----------------------------------------------------------------------------

const t_key_info *    KeyInfo_FindByScancode(int scancode);
const t_key_info *    KeyInfo_FindByName(const char *name);

//-----------------------------------------------------------------------------

